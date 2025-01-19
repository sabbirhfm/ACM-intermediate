
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n = 20;
    map<int, int> mp;
    for(int i=2; i<=n; i++)
    {
        while(n%i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
    if(n != 1) mp[n]++;

    for(auto [key, val] : mp)
    {
        cout << key << " " << val << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve();


    return 0;
}
