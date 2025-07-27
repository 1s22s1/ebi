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
vector<string> Sn;
vector<string> answer_vector;

void dfs(string s, ll count)
{
    if (K == count)
    {
        answer_vector.emplace_back(s);

        return;
    }
    else
    {
        for (auto e : Sn)
        {
            dfs(s + e, count + 1);
        }
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
        Sn.emplace_back(s);
    }

    dfs("", 0);
    sort(answer_vector.begin(), answer_vector.end());

    cout << answer_vector.at(X - 1) << endl;

    return 0;
}
