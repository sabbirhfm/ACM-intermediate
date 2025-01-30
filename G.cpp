#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const int N = 1E4;
int n, m;
char mat[N][N];
bool vis[N][N];
vector<pair<int, int> > directionArr = {{1,0}, {0, 1}, {-1,0}, {0,-1}};
bool isValid(int ci, int cj)
{
    return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}
int cnt; // if cnt 1 zeero, do nothing
void dfs(int si, int sj)
{
    vis[si][sj] = true; cnt++;
    for(int i=0; i<4; i++)
    {
        int ci = si + directionArr[i].first;
        int cj = sj + directionArr[i].second;
        if(isValid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '#')
        {
            cnt++;
            dfs(ci, cj);
        }
    }
}
void solve()
{
    cin >> n >> m;
    int tot = n*m, milbeNa = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> mat[i][j]; if(mat[i][j] == '#') milbeNa++;
        }
    }
    if(tot == milbeNa) // edge case
    {
        cout << tot * 2 << nl; return;
    }
    if(milbeNa == 0) // edge case
    {
        cout << 2 << nl; return;
    }

    memset(vis, false, sizeof(vis));

    vector<int> v;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mat[i][j] == '.')
            {
                mat[i][j] = '#';
                int arektaCnt = 0;
                for(int k=0; k<n; k++)
                {
                    for(int l=0; l<m; l++)
                    {
                        cnt = 0;
                        if(mat[k][l] == '#' && !vis[k][l])
                        {
                            dfs(k, l); //cnt++;
                            if(cnt > 1) arektaCnt += (cnt*2);
                        }
                    }
                }
                v.push_back(arektaCnt);
                memset(vis, false, sizeof(vis));
                mat[i][j] = '.'; // restore
            }
        }
    }
    print(v);

}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    //cin >> t; // multiple test case
    for(int tt=1; tt<=t; tt++)
    {
        //cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}

