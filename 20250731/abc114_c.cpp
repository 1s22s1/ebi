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
ll max_size;
ll answer = 0;

void solve(string s, ll size)
{
    if (size > max_size)
    {
        return;
    }

    if (s.find('3') != string::npos && s.find('5') != string::npos && s.find('7') != string::npos)
    {
        if (stoll(s) <= N)
        {
            answer++;
        }
    }

    string t = "357";
    for (auto c : t)
    {
        solve(s + c, size + 1);
    }
}

int main()
{
    init();

    cin >> N;
    max_size = to_string(N).size();

    solve("3", 1);
    solve("5", 1);
    solve("7", 1);

    cout << answer << endl;

    return 0;
}
