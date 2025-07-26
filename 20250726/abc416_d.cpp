#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

void solve()
{
    ll N, M;
    cin >> N >> M;

    vector<ll> A;
    rep(i, N)
    {
        ll a;
        cin >> a;
        A.emplace_back(a % M);
    }

    vector<ll> B;
    rep(i, N)
    {
        ll b;
        cin >> b;
        B.emplace_back(b % M);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll sum = 0;
    rep(i, N)
    {
        sum += (A.at(i) + B.at(i)) % M;
    }

    cout << sum << endl;
}

int main()
{
    init();

    ll T;
    cin >> T;

    rep(i, T)
    {
        solve();
    }

    return 0;
}
