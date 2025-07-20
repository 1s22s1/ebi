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

    string S;
    cin >> S;

    ll N = 10;

    vector<vector<ll>> dp(N, vector<ll>(S.size(), 0));
    rep(i, S.size())
    {
        if (S.at(i) == 'R')
        {
            dp.at(0).at(i) = i + 1;
        }
        else
        {
            dp.at(0).at(i) = i - 1;
        }

        rep(i, N - 1)
        {
            rep(j, S.size())
            {
                dp.at(i + 1).at(j) = dp.at(i).at(dp.at(i).at(j));
            }
        }
    }

    vector<ll> answer(S.size(), 0);

    for (auto v : dp.at(N - 1))
    {
        answer.at(v)++;
    }

    for (auto a : answer)
    {
        cout << a << ' ';
    }

    cout << endl;

    return 0;
}
