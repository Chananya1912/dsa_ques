#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Node {
    int key;
    int left;
    int right;
};

bool isBSTUtil(const vector<Node>& tree, int index, long long minKey, long long maxKey) {
    if (index == -1) return true;

    int key = tree[index].key;
    if (key < minKey || key > maxKey)
        return false;

    return isBSTUtil(tree, tree[index].left, minKey, key - 1LL) &&
           isBSTUtil(tree, tree[index].right, key + 1LL, maxKey);
}

bool isBinarySearchTree(const vector<Node>& tree) {
    if (tree.empty()) return true;
    return isBSTUtil(tree, 0, LLONG_MIN, LLONG_MAX);
}

int main() {
    int n;
    cin >> n;
    vector<Node> tree(n);
    for (int i = 0; i < n; ++i)
        cin >> tree[i].key >> tree[i].left >> tree[i].right;

    cout << (isBinarySearchTree(tree) ? "CORRECT" : "INCORRECT") << endl;
    return 0;
}
