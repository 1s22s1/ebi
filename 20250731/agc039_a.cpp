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

vector<pair<char, long long>> rle(string s)
{
    vector<pair<char, long long>> vec;

    ll i = 0;
    while (i < s.size())
    {
        ll j = i;
        while (j < s.size() && s.at(i) == s.at(j))
        {
            j++;
        }

        vec.push_back({s.at(i), j - i});
        i = j;
    }

    return vec;
}

int main()
{
    init();

    string S;
    ll K;

    cin >> S >> K;

    auto compressed_S = rle(S);

    if (compressed_S.size() == 1)
    {
        cout << compressed_S.at(0).second * K / 2 << endl;

        return 0;
    }

    if (compressed_S.front().first == compressed_S.back().first)
    {
        ll middle = 0;

        for (ll i = 1; i < compressed_S.size() - 1; i++)
        {
            middle += compressed_S.at(i).second / 2;
        }

        ll left = compressed_S.front().second;
        ll right = compressed_S.back().second;
        cout << middle * K + (left + right) / 2 * (K - 1) + left / 2 + right / 2 << endl;
    }
    else
    {
        ll answer = 0;
        for (auto e : compressed_S)
        {
            answer += e.second / 2;
        }

        answer *= K;

        cout << answer << endl;
    }

    return 0;
}
