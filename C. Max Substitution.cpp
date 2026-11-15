#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1e9 + 7;
ll pw(ll b, ll e) {
    ll r = 1;
    for (; e; e >>= 1, b = b * b % M) if (e & 1) r = r * b % M;
    return r;
}
ll maxSubstitutionPossible(vector<ll>& b) {
    sort(b.rbegin(), b.rend());
    ll a = 1;
    int n = b.size();
    for (int j = 1; j <= n && (j == n || b[j - 1] > b[j]); j++) a = (a + pw(b[j - 1] - 1, j)) % M;
    return a;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        vector<ll> A(N);
        for (auto& X : A) cin >> X;
        cout << maxSubstitutionPossible(A) << '\n';
    }
}