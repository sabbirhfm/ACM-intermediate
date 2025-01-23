#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    map<int, int> mp;

    int n; cin >> n;
    while(n%2 == 0)
    {
        mp[2]++;
        n /= 2;
    }
    while(n%5 == 0)
    {
        mp[5]++;
        n /= 5;
    }
    /*for(int i=2; i<=n; i++)
    {
        while(n%i == 0)
        {
            n /= i;
            mp[i]++;
        }
    }*/
    //if(n != 1) mp[n]++;

    // prime factors and freq
    cout << max(mp[2], mp[5]) << nl;


}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}

