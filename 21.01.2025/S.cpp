
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int MOD = 10E9 + 7;
void solve()
{
    int n; cin >> n;
    ll fact = 1;
    for(int i=2; i<=n; i++)
    {
        //fact *= i;
        fact = (1ll* fact%MOD * i%MOD) % MOD;
    }
    //cout << fact << nl;

    int cnt = 0;
    for(ll i=1; i<=fact; i++)
    {
        if(fact%i == 0) cnt++;
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve();


    return 0;
}
