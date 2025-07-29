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
        ll s_size = s.size();
        ll s3_size = s_size * 3;

        vector<string> t(s3_size, string(".", s3_size));

        // 一つ下のレベルのカーペットを９回コピーする。
        rep(l, s3_size)
        {
            rep(m, s3_size)
            {
                t.at(l).at(m) = s.at(l % s_size).at(m % s_size);
            }
        }

        // カーベットの真ん中を白くする。
        rep(l, s_size)
        {
            rep(m, s_size)
            {
                t.at(l + s_size).at(m + s_size) = '.';
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
