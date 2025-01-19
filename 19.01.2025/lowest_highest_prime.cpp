
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int n = 100;
bool comp[n+1] = {0};
//vector<int> di[n+1];
vector<int> lp(n+1); // lowest prime divisor
void solve()
{
    for(int i=1; i<=n; i++) lp[i] = 0;
    for(int i=2; i*i <= n; i++) // i is a prime
    {
        if(comp[i]) continue;
        lp[i] = i;

        for(int j=i+i; j<=n; j+=i)
        {
            comp[j] = true;
            if(lp[j] == 0) lp[j] = i; // for lowest prime
            //lp[j] = i; // for highest prime [eta temon lagena]
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(lp[i] != 0)
        {
            cout << i << " -> " << lp[i] << nl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve();

    return 0;
}


