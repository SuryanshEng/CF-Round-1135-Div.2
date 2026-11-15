#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        ll n, k;
        string least_diverse2;
        cin >> n >> k >> least_diverse2;
        ll c1 = count(least_diverse2.begin(), least_diverse2.end(), '1'), c0 = n - c1;
        auto f = [&](ll a) { ll b = n - a; return 1 + a * (a + 1) / 2 + b * (b + 1) / 2; };
        cout << max(f(c1 - min(k, c1)), f(c1 + min(k, c0))) << '\n';
    }
}