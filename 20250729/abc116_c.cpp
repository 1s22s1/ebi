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

    vector<ll> Hn;
    rep(i, N)
    {
        ll h;
        cin >> h;
        Hn.emplace_back(h);
    }

    ll answer = 0;

    for (ll h = 1; h <= *max_element(Hn.begin(), Hn.end()); h++)
    {
        ll i = 0;
        while (i < N)
        {
            ll j = i;
            // 水やりをしなくても良い場合
            if (Hn.at(j) < h)
            {
                while (j < N && Hn.at(j) < h)
                {
                    j++;
                }
            }
            // 水やりをする必要がある場合
            else
            {
                while (j < N && Hn.at(j) >= h)
                {
                    j++;
                }

                answer++;
            }

            i = j;
        }
    }

    cout << answer << endl;

    return 0;
}
