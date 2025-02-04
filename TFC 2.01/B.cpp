#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, a, b; cin >> n >> a >> b;

    if(b > 0) // clock-wise move
    {
        ll cur = a;
        //cout << a << " " << b << nl;
        ll tot_move = b;
        for(int i=1; i<=tot_move; i++)
        {
            cur++;
            if(cur == n+1) cur = 1;
        }
        cout << cur << nl;
    }
    else // anti-clockwise
    {
        ll cur = a;
        //cout << a << " " << b << nl;
        ll tot_move = -b;
        for(int i=1; i<=tot_move; i++)
        {
            cur--;
            if(cur == 0) cur = n;
        }
        cout << cur << nl;
    }
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


