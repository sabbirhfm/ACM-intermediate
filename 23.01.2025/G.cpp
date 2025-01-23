// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
using Goldbach's Conjecture theorum we know that is even(2<) = prime_num + prime_num
*/
const int N = 1E7;
bool comp[N+1];
bool isPrime(int x)
{
    int sz = sqrt(x);
    for(int i = 2; i<=sz; i++)
    {
        if(x%i == 0) return false;
    }
    return true;
}
void solve()
{
    int n; cin >> n; int tmp = n;

    // edge case-1
    if(n == 3 || n == 5)
    {
        cout << 1 << nl; cout << n << nl; return;
    }

    // comp[N] = {0}; comp[1] = true;
    memset(comp, 0, sizeof(comp)); comp[1] = true;
    vector<int> primeDivisors;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if(comp[i]) continue;
        primeDivisors.push_back(i);

        for (int j = 2*i; j <= N; j+=i)
        {
            comp[j] = true;
        }
    }

    if(n & 1)
    {
        n -= 3;

        for (int i = 0; i < primeDivisors.size() && (n <= N); i++)
        {
            int data = n - primeDivisors[i];
            if(!comp[data])
            {
                cout << 3 << nl;
                cout << 3 << " ";
                cout << primeDivisors[i] << " " << data << nl; return;
            }
        }

        // edge case
        int x = -1, y = -1;
        for(int i = n-5; i >= 2; i--)
        {
            if(isPrime(i))
            {
                x = i; break;
            }
        }
        for(int i = 2; i <= n; i++)
        {
            if(isPrime(i) && n == (i+x)) // n is ok
            {
                y = i; break;
            }
            //else if(i+x > n) break;
        }
        if(x != -1 && y != -1)
        {
            cout << 3 << nl;
            cout << 3 << " " << x << " " << y << nl; return;
        }

        // edge case
        if(isPrime(tmp)) // tmp ok
        {
            cout << 1 << nl;
            cout << tmp << nl; return;
        }

        // edge case
        if(isPrime(n)) // n ok
        {
            cout << 2 << nl;
            cout << 3 << " " << n << nl; return;
        }
    }
    else
    {
        for (int i = 0; i < primeDivisors.size() && (n <= N); i++)
        {
            int data = n - primeDivisors[i];
            if(!comp[data])
            {
                cout << 2 << nl;
                cout << primeDivisors[i] << " " << data << nl; return;
            }
        }

        // edge case
        int x, y;
        for(int i = n-5; i >= 2; i--)
        {
            if(isPrime(i))
            {
                x = i; break;
            }
        }
        for(int i = 2; i <= n; i++)
        {
            if(isPrime(i) && n == (x+i))
            {
                y = i; break;
            }
        }
        cout << 2 << nl;
        cout << x << " " << y << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}
