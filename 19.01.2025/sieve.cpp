
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    // composite - non prime
    int n = 100;
    bool comp[n+1] = {0}; // 1-n initially false

    // sieve function
    for(int i=2; i*i <= n; i++) // i is a prime
    {
        if(comp[i]) continue;

        for(int j=i*i; j<=n; j+=i) // j is a multiple of i
        {
            comp[j] = true;
        }
    }
    // i is a prime divisor of j

    for(int i = 2; i <= n; i++)
    {
        if(!comp[i]) cout << i << " ";
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
