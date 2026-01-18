#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long long ll;
const ll MOD = 1000000007;
const ll X = 263;

vector<ll> p, h;

void precompute_hashes(const string& s) {
    int n = s.size();
    h.resize(n + 1);
    p.resize(n + 1);
    h[0] = 0;
    p[0] = 1;
    for (int i = 1; i <= n; ++i) {
        h[i] = (X * h[i - 1] + s[i - 1]) % MOD;
        p[i] = (p[i - 1] * X) % MOD;
    }
}

ll get_hash(int l, int len) {
    ll hash_val = (h[l + len] - (p[len] * h[l]) % MOD + MOD) % MOD;
    return hash_val;
}

int main() {
    string s;
    cin >> s;
    precompute_hashes(s);
    int q;
    cin >> q;
    while (q--) {
        int a, b, l;
        cin >> a >> b >> l;
        if (get_hash(a, l) == get_hash(b, l)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
