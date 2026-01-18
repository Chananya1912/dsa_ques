#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Node {
    int key, priority;
    long long sum;
    Node *left, *right;

    Node(int key) : key(key), priority(rand()), sum(key), left(nullptr), right(nullptr) {}
};

long long getSum(Node* root) {
    return root ? root->sum : 0;
}

void update(Node* root) {
    if (root) {
        root->sum = root->key + getSum(root->left) + getSum(root->right);
    }
}

void split(Node* root, int key, Node*& left, Node*& right) {
    if (!root) {
        left = right = nullptr;
    } else if (key < root->key) {
        split(root->left, key, left, root->left);
        right = root;
    } else {
        split(root->right, key, root->right, right);
        left = root;
    }
    update(root);
}

Node* merge(Node* left, Node* right) {
    if (!left || !right) return left ? left : right;
    if (left->priority > right->priority) {
        left->right = merge(left->right, right);
        update(left);
        return left;
    } else {
        right->left = merge(left, right->left);
        update(right);
        return right;
    }
}

Node* insert(Node* root, int key) {
    Node *l, *r;
    split(root, key, l, r);
    return merge(merge(l, new Node(key)), r);
}

Node* erase(Node* root, int key) {
    if (!root) return nullptr;
    if (root->key == key)
        return merge(root->left, root->right);
    if (key < root->key)
        root->left = erase(root->left, key);
    else
        root->right = erase(root->right, key);
    update(root);
    return root;
}

long long rangeSum(Node*& root, int l, int r) {
    Node *t1, *t2, *t3;
    split(root, l - 1, t1, t2);
    split(t2, r, t2, t3);
    long long res = getSum(t2);
    root = merge(t1, merge(t2, t3));
    return res;
}

int main() {
    srand(time(0));
    int n;
    cin >> n;
    Node* root = nullptr;
    char op;
    int x, l, r;
    long long last_sum = 0;

    while (n--) {
        cin >> op;
        if (op == '+') {
            cin >> x;
            x = (x + last_sum) % 1000000001;
            root = insert(root, x);
        } else if (op == '-') {
            cin >> x;
            x = (x + last_sum) % 1000000001;
            root = erase(root, x);
        } else if (op == '?') {
            cin >> x;
            x = (x + last_sum) % 1000000001;
            Node *l, *r, *temp;
            split(root, x, l, r);
            split(l, x - 1, l, temp);
            if (temp) cout << "Found\n";
            else cout << "Not found\n";
            root = merge(merge(l, temp), r);
        } else if (op == 's') {
            cin >> l >> r;
            l = (l + last_sum) % 1000000001;
            r = (r + last_sum) % 1000000001;
            last_sum = rangeSum(root, l, r);
            cout << last_sum << "\n";
        }
    }
    return 0;
}
