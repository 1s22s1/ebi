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

    vector<vector<ll>> g(N);
    rep(i, M)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;

        g.at(a).emplace_back(b);
        g.at(b).emplace_back(a);
    }

    ll answer = 0;

    rep(i, N)
    {
        ll count = count_if(g.at(i).begin(), g.at(i).end(), [i](int n)
                            { return i > n; });

        if (count == 1)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
