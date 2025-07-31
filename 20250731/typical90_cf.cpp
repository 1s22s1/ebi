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

    long long i = 0;
    while (i < s.size())
    {
        long long j = i;
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

    ll N;
    string S;
    cin >> N >> S;

    ll answer = N * (N - 1) / 2;

    auto pair = rle(S);
    for (auto const &p : pair)
    {
        answer -= p.second * (p.second - 1) / 2;
    }

    cout << answer << endl;

    return 0;
}
