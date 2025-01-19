
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
    int x; cin >> x;
    for(int i=1; i<=n; i++) lp[i] = 1;
    for(int i=2; i*i <= n; i++) // i is a prime
    {
        if(comp[i]) continue;
        lp[i]++;

        for(int j=i+i; j<=n; j+=i)
        {
            comp[j] = true;
            lp[j]++;
        }
    }

    cout << lp[x] << " ";

    if(lp[x] <= 2) cout << "YES" << nl;
    else cout << "NO" << nl;
    /*for(int i=1; i<=n; i++)
    {
        if(lp[i] <= 1)
        {
            cout << "YES" << nl
        }
    }*/
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();


    return 0;
}



