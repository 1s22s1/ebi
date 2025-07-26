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

ll N, K, X;
vector<string> vec;
vector<string> answer;

void dfs(string crr, int count)
{
    if (count == K)
    {
        answer.emplace_back(crr);
        return;
    }

    for (auto c : vec)
    {
        dfs(crr + c, count + 1);
    }
}

int main()
{
    init();

    cin >> N >> K >> X;

    rep(i, N)
    {
        string s;
        cin >> s;
        vec.emplace_back(s);
    }

    dfs("", 0);
    sort(answer.begin(), answer.end());

    cout << answer.at(X - 1) << endl;

    return 0;
}
