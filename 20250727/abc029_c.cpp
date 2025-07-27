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

ll N;

void dfs(string s, ll count)
{
    if (N == count)
    {
        cout << s << endl;

        return;
    }

    string t = "abc";
    for (auto c : t)
    {
        dfs(s + c, count + 1);
    }
}

int main()
{
    init();

    cin >> N;

    dfs("", 0);

    return 0;
}
