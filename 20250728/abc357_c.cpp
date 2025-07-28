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

    vector<string> s = {"#"};

    rep(i, N)
    {
        ll carpet_size = s.size();
        ll next_carpet_size = carpet_size * 3;

        vector<string> t(next_carpet_size, string(next_carpet_size, '.'));

        rep(l, next_carpet_size)
        {
            rep(m, next_carpet_size)
            {
                t.at(l).at(m) = s.at(l % carpet_size).at(m % carpet_size);
            }
        }

        rep(l, carpet_size)
        {
            rep(m, carpet_size)
            {
                t.at(l + carpet_size).at(m + carpet_size) = '.';
            }
        }

        s = t;
    }

    for (auto e : s)
    {
        cout << e << endl;
    }

    return 0;
}
