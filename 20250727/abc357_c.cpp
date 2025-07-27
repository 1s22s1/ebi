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
        ll width = s.size() * 3;
        vector<string> t(width, string(width, '.'));

        rep(l, width)
        {
            rep(m, width)
            {
                t.at(l).at(m) = s.at(l % s.size()).at(m % s.size());
            }
        }

        rep(l, s.size())
        {
            rep(m, s.size())
            {
                t.at(s.size() + l).at(s.size() + m) = '.';
            }
        }

        s = t;
    }

    rep(i, s.size())
    {
        cout << s.at(i) << endl;
    }

    return 0;
}
