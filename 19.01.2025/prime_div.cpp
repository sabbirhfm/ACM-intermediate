#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int n = 100;
vector<int> di[n+1];
void solve()
{
    // composite - non prime
    bool comp[n+1] = {0}; // 1-n initially false

    for(int i=2; i <= n; i++) // i is a number
    {
        if(comp[i]) continue;
        else di[i].push_back(i);

        for(int j=i+i; j<=n; j+=i) // j is a multiple of i
        {
            comp[j] = true;
            di[j].push_back(i);
        }
    }
    // i is a divisor of j [not prime divisor]

    for(int i = 1; i<=n; i++)
    {
        cout << i << " -> ";
        for(int j=0; j<di[i].size(); j++)
        {
            cout << di[i][j] << " ";
        }
        cout << nl;
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


