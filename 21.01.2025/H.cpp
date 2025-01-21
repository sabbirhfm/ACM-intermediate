#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E5;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    bool comp[N+1] = {0}; comp[1] = true;
    vector<int> primeList;

    for (int i = 2; i <= N; i++)
    {
        if(!comp[i])
        {
            primeList.push_back(i);
            for (int j = 2*i; j <= N; j+=i) comp[j] = true;
        }
    }

    ll sum = 0;
    deque<int> ans;

    for (int i = 0; i < n; i++)
    {
        sum += primeList[i];
        ans.push_back(primeList[i]);
    }

    // print(ans);

    int idx = n;
    while (!comp[sum])
    {
        sum -= ans[0]; ans.pop_front();
        sum += primeList[idx]; ans.push_back(primeList[idx]);
        idx++;
    }

    // cout << sum << nl;
    print(ans);

    return 0;
}
