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

    vector<char> vec(s.begin(), s.end());
    sort(vec.begin(), vec.end());
    auto last = unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());

    if (vec.size() == 1)
    {
        cout << 0 << endl;

        return 0;
    }

    ll answer = 1000;

    for (auto c : vec)
    {
        ll max_it = 0;
        ll i = 0;
        while (i < s.size())
        {
            ll j = i;
            while (j < s.size() - 1 && s.at(j) != c && s.at(j + 1) != c)
            {
                j++;
            }

            max_it = max(max_it, j - i + 1);
            i = j + 1;
        }

        answer = min(answer, max_it);
    }

    cout << answer << endl;

    return 0;
}
