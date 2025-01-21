
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int MOD = 1E9 + 7;
ll Pow(ll x, ll y)
{
    ll ans = 1;
    while(y)
    {
        if(y & 1) ans *= x;
        //if(y & 1) ans = (ans * x) % MOD; // if MOD is given

        y >>= 1;
        x *= x;
        //x = (x * x) % MOD; // if MOD is given
    }

    return ans;
}
void solve()
{
    ll x = 2, y = 4;
    cout << Pow(x, y) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve();


    return 0;
}
