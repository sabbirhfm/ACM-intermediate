#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    ll firstMove = n-k;
    n -= k;
    if(n == 0)
    {
        cout << "YES" << nl; return;
    }

    ll tmp = n/k;
    if(tmp%2 == 0) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    //cin >> t; // multiple test case
    for(int tt=1; tt<=t; tt++)
    {
        //cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}

