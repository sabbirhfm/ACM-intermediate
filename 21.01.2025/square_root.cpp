
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n = 16;
    int l = 1, r = n-1, mid, ans = -1;
    while(l <= r)
    {
        mid = l + (r-l)/2;
        if(mid * mid <= n)
        {
            ans = mid; l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans * ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve();


    return 0;
}

