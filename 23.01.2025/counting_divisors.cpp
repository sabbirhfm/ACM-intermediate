#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    vector<set<int>> divisors(n+1);
    bool prime[n+1] = {true}; prime[1] = false;

    for(int i=2; i<=sqrt(n); i++)
    {
        //if(!prime[i]) continue;
        divisors[i].insert(i);

        for(int j=i+i; j<=n; j+=i)
        {
            prime[j] = false;
            divisors[j].insert(i);
        }
    }
    set<int> s = divisors[n];
    print(s);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}

