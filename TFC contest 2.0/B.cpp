#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const double PI = 3.1416;
void solve()
{
    double r; cin >> r;
    double areaOfTwoCircle = 2 * (PI * (r * r));
    double areaOfRec = (2*r) * (4*r);

    double ans = areaOfRec - areaOfTwoCircle;
    printf("%.2lf\n", ans);
}
int main()
{
    int t = 1;
    cin >> t; // multiple test case
    for(int tt=1; tt<=t; tt++)
    {
        cout << "Case " << tt << ": ";
        solve();
    }

    return 0;
}
