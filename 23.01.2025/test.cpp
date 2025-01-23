#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    int cnt = 0;
    for(int i=1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            cnt++;
            if(i != n/i) cnt++;
        }
    }

    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}


