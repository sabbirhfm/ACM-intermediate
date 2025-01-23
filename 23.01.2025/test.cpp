#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E6;
vector<set<int>> divisors(N+1);
void preCalculate()
{
    for(int i=1; i*i <= N; i++) // i is a number
    {
        for(int j=i; j<=N; j+=i) // j is a multiple of i
        {
            divisors[j].insert(i);
        }
    }
}
void solve()
{
    int n; cin >> n;

    int cnt = 0;
    for(int i=1; i*i <= n; i++) // i is a number
    {
        if(n%i == 0)
        {
            cnt++;
            if(i != n/i) cnt++;
        }
    }

    cout << cnt << nl;

    //cout << divisors[n].size() << nl;

    // i is a divisor of j [not prime divisor]

    /*for(int i = 1; i<=n; i++)
    {
        cout << i << " -> ";
        auto data = divisors[i];
        print(data);
    }*/
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //preCalculate();

    int t; cin >> t;
    while (t--) solve();

    return 0;
}


