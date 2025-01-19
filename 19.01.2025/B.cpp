
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int x; cin >> x;
    vector<int> v;
    int n = 1E6;
    bool comp[n+1] = {0};
    for(int i=2; i <= n; i++) // i is a prime
    {
        if(comp[i]) continue;
        else v.push_back(i);
        for(int j=i+i; j<=n; j+=i)
        {
            comp[j] = true;
        }
    }
    auto it = lower_bound(all(v), x);
    if(it != v.end() && *it == x) cout << x << nl;
    else
    {
        auto it2 = upper_bound(all(v), x);
        cout << *it2 << nl;
    }

    //print(v);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //int t; cin >> t;
    //while (t--) solve();
    solve();

    return 0;
}


