

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &c : v) cin >> c;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        bool isMatch = false;
        for(int j=0; j<n; j++)
        {
            if(i == j) continue;
            if(v[i]%v[j] == 0) isMatch = true;
        }
        if(isMatch == false) cnt++;
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
