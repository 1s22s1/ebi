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

ll N, K;
vector<ll> R;

void solve(vector<ll> vec, ll count)
{
    if (count == N)
    {
        if (accumulate(vec.begin(), vec.end(), 0LL) % K == 0)
        {
            for (auto e : vec)
            {
                cout << e << ' ';
            }

            cout << endl;
        }

        return;
    }
    else
    {
        for (ll i = 1; i <= R.at(count); i++)
        {
            vec.emplace_back(i);
            solve(vec, count + 1);
            vec.pop_back();
        }
    }
}

int main()
{
    init();

    cin >> N >> K;
    rep(i, N)
    {
        ll r;
        cin >> r;
        R.emplace_back(r);
    }

    solve({}, 0);

    return 0;
}
