#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int key;
    int left;
    int right;
};

vector<Node> tree;

void inOrder(int idx, vector<int>& result) {
    if (idx == -1) return;
    inOrder(tree[idx].left, result);
    result.push_back(tree[idx].key);
    inOrder(tree[idx].right, result);
}

void preOrder(int idx, vector<int>& result) {
    if (idx == -1) return;
    result.push_back(tree[idx].key);
    preOrder(tree[idx].left, result);
    preOrder(tree[idx].right, result);
}

void postOrder(int idx, vector<int>& result) {
    if (idx == -1) return;
    postOrder(tree[idx].left, result);
    postOrder(tree[idx].right, result);
    result.push_back(tree[idx].key);
}

int main() {
    int n;
    cin >> n;
    tree.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> tree[i].key >> tree[i].left >> tree[i].right;
    }

    vector<int> result;

    // In-order
    result.clear();
    inOrder(0, result);
    for (int v : result) cout << v << " ";
    cout << endl;

    // Pre-order
    result.clear();
    preOrder(0, result);
    for (int v : result) cout << v << " ";
    cout << endl;

    // Post-order
    result.clear();
    postOrder(0, result);
    for (int v : result) cout << v << " ";
    cout << endl;

    return 0;
}
