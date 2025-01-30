
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
const int MOD = 1E9 + 7;
using namespace std;
/*ll Pow(ll a, ll b)
{
    ll ans = 1;
    while(b)
    {

    }
}*/
void solve()
{
    ll n; cin >> n;
    if(n <= 5) cout << "MIT time" << nl;
    else if(n > 5 && n <= 25) cout << "MIT^2 time" << nl;
    else if(n > 25 && n <= 125) cout << "MIT^3 time" << nl;
    else
    {
        for(ll i=1; ; i++)
        {
            if(pow(1ll*5, i) >= n)
            {
                cout << "MIT^" << i << " time" << nl;
                return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    cin >> t; // multiple test case
    for(int tt=1; tt<=t; tt++)
    {
        //cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
