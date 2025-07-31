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

    ll N;
    cin >> N;

    vector<ll> Sn = {0};
    rep(i, N)
    {
        ll a;
        cin >> a;
        Sn.emplace_back(Sn.back() + a);
    }

    for (ll i = 1; i <= N; i++)
    {
        ll max_it = -1;
        for (ll j = i; j <= N; j++)
        {
            max_it = max(max_it, Sn.at(j) - Sn.at(j - i));
        }

        cout << max_it << endl;
    }

    return 0;
}
