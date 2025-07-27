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

vector<ll> solve(ll n)
{

    if (n == 1)
    {
        return {1};
    }
    else
    {
        vector<ll> vec1 = solve(n - 1);
        vector<ll> vec2 = vec1;
        vec2.emplace_back(n);
        vec2.insert(vec2.end(), vec1.begin(), vec1.end());

        return vec2;
    }
}

int main()
{
    init();

    cin >> N;

    auto answer = solve(N);
    for (auto e : answer)
    {
        cout << e << ' ';
    }

    cout << endl;

    return 0;
}
