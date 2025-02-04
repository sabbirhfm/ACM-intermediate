#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
i think all random tc will be AC if they are smaller in range, because tc-1,2,3,4 AC
*/
void solve()
{
    ll n; cin >> n;

    ll ans = 0;
    int five = 0, six = 0, seven = 0;
    for(ll bit = 0; bit<(1<<n); bit++)
    {
        int cnt = 0;
        for(ll k = 0; k<n; k++)
        {
            //if((bit >> k) & 1) cout << 1 << " ";
            //else cout << 0 << " ";
            if((bit >> k) & 1) cnt++;
        }
        if(cnt >= 5 && cnt <= 7)
        {
            //cout << cnt << nl;
            if(cnt == 5) five++;
            if(cnt == 6) six++;
            if(cnt == 7) seven++;
            ans++;
        }
        //cout << nl;
    }
    //cout << five << " " << six << " " << seven << nl;
    cout << ans << nl;
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

