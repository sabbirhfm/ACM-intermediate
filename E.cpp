
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    string str;
    for(auto data : s)
    {
        if(data == 'M' || data == 'I' || data == 'T') str += data;
    }

    if(s.size() != str.size())
    {
        cout << "NO" << nl; return;
    }

    //cout << "main string -> " << str << nl;
    deque<char> dq;
    for(auto data : str)
    {
        if(!dq.empty() && dq.back() == data)
        {
            cout << "NO" << nl; return;
        }
        dq.push_back(data);
    }

    bool isMatch = true;
    while(!dq.empty() && isMatch)
    {
        if(dq.front() == 'M' && dq.size() < 3)
        {
            isMatch = false; break;
        }
        if(dq.front() == 'M')
        {
            dq.pop_front();

            while(dq.size() >= 2 && dq[0] == 'I' && dq[1] == 'T')
            {
                char needI = dq.front();
                if(needI != 'I')
                {
                    isMatch = false; break;
                }
                else dq.pop_front();

                char needT = dq.front();
                if(needT != 'T')
                {
                    isMatch = false; break;
                }
                else dq.pop_front();
            }
        }
        else
        {
            isMatch = false;
        }
    }

    //cout << "print dq after op -> ";
    //print(dq);

    if(dq.empty()) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    cin >> t; // multiple test case
    for(int tt=1; tt<=t; tt++)
    {
        //cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}
