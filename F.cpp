#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
vector<bool> vis(1E7);
void solve()
{
    string s; cin >> s; int n = s.size();

    int cnt = 0;

    int tot = 0;
    for(int l=0, mid=1, r=2; r<n; )
    {
        if(s[l] == '^' && s[r] == '^' && s[mid] == '_'  && l < mid && mid < r)
        {
            vis[l] = true;
            vis[mid] = true;
            vis[r] = true;
            tot++; l = r+1, mid = l+1, r = l+2;
        }
        while(s[l] == '_' && l < n) l++;
        mid = l + 1;
        while(s[mid] != '_' && mid < n) mid++;
        r = mid + 1;
        while(s[r] == '_' && r < n) r++;
    }

    string str;
    for(int i=0; i<n; i++)
    {
        if(!vis[i]) str += s[i];
    }
    n = str.size();

    //cout << str << nl;

    for(int i=0, j=n-1, k = 1; i<j && i<k && k<j ;)
    {
        if(str[i] == '^' && str[j] == '^' && str[k] == '_')
        {
            cnt++; i++, k++, j--;
        }
        while(str[i] == '_') i++;
        while(str[j] == '_') j--;
        while(str[k] != '_') k++;
    }

    cout << tot + cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    cin >> t; // multiple test case
    for(int tt=1; tt<=t; tt++)
    {
        cout << "Case " << tt << ": ";
        solve();
    }

    return 0;
}
