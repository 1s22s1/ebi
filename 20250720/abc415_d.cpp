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

int main()
{
    init();

    ll N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> pv;
    rep(i, M)
    {
        ll a, b;
        cin >> a >> b;

        pv.emplace_back(a - b, a);
    }

    sort(pv.begin(), pv.end());

    ll answer = 0;

    for (auto [d, a] : pv)
    {
        if (N < a)
        {
            continue;
        }

        ll x = (N - a) / d + 1;
        answer += x;
        N -= x * d;
    }

    cout << answer << endl;

    return 0;
}
