#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Node {
    int key;
    int left;
    int right;
};

bool isBSTUtil(const vector<Node>& tree, int index, long long minKey, long long maxKey, bool allowEqualRight) {
    if (index == -1) return true;

    long long key = tree[index].key;

    if (key < minKey || key > maxKey)
        return false;

    bool leftOK = isBSTUtil(tree, tree[index].left, minKey, key - 1, allowEqualRight);
    bool rightOK = isBSTUtil(tree, tree[index].right, allowEqualRight ? key : key + 1, maxKey, allowEqualRight);
    return leftOK && rightOK;
}

bool isBinarySearchTreeHard(const vector<Node>& tree) {
    if (tree.empty()) return true;
    return isBSTUtil(tree, 0, LLONG_MIN, LLONG_MAX, true);
}

int main() {
    int n;
    cin >> n;
    vector<Node> tree(n);
    for (int i = 0; i < n; ++i)
        cin >> tree[i].key >> tree[i].left >> tree[i].right;

    cout << (isBinarySearchTreeHard(tree) ? "CORRECT" : "INCORRECT") << endl;
    return 0;
}
