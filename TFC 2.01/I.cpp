#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, mnp, mxp, diff; cin >> n >> mnp >> mxp >> diff;
    vector<ll> v(n); for(auto &e : v) cin >> e;

    int cnt = 0;

    for(int bit = 0; bit<(1<<n); bit++)
    {
        ll mn = 1E9+5, mx = -1, prbCnt = 0, tot = 0;
        for(int k = 0; k<n; k++)
        {
            //if((bit >> k) & 1) cout << 1 << " ";
            //else cout << 0 << " ";
            if((bit >> k) & 1)
            {
                tot += v[k];
                mn = min(mn, v[k]); mx = max(mx, v[k]); prbCnt++;
            }
        }
        if(tot >= mnp && tot <= mxp && prbCnt >= 2 && mx-mn >= diff) cnt++;
        //cout << nl;
    }
    cout << cnt << nl;
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

