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

    string S;
    cin >> S;

    vector<ll> vec(S.size() + 1, 0);

    rep(i, S.size())
    {
        if (S.at(i) == '<')
        {
            vec.at(i + 1) = max(vec.at(i + 1), vec.at(i) + 1);
        }
    }

    for (int i = S.size() - 1; i >= 0; i--)
    {
        if (S.at(i) == '>')
        {
            vec.at(i) = max(vec.at(i), vec.at(i + 1) + 1);
        }
    }

    cout << accumulate(vec.begin(), vec.end(), 0LL) << endl;

    return 0;
}
