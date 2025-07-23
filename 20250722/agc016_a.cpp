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

    string s;
    cin >> s;
    auto t = s;

    ll answer = 101;

    sort(t.begin(), t.end());
    auto l = unique(t.begin(), t.end());
    t.erase(l, t.end());

    if (t.size() == 1)
    {
        cout << 0 << endl;
    }

    for (auto c : t)
    {
    }

    cout << answer << endl;

    return 0;
}
