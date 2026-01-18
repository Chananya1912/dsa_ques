#include <iostream>
#include <ext/rope>

using namespace std;
using namespace __gnu_cxx;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    rope<char> R(s.c_str());
    int q;
    cin >> q;
    while (q--) {
        int i, j, k;
        cin >> i >> j >> k;
        rope<char> sub = R.substr(i, j - i + 1);
        R.erase(i, j - i + 1);
        R.insert(k, sub);
    }
    cout << R << "\n";
    return 0;
}
