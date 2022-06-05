#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> k >> n;
    vector <int> v(n), mark(200, 0);
    for(int i = 0; i < n; i++) cin >> v[i], mark[v[i]]++;
    int r1=0, r2=0;
    for(int i = k; ; i++)
    {
        if(!mark[i])
        {
            r1 = i;
            break;
        }
    }
    for(int i = k; ; i--)
    {
        if(!mark[i])
        {
            r2 = i;
            break;
        }
    }
    if(abs(k-r1) < abs(k-r2)) cout << r1 << endl;
    else cout << r2 << endl;
}

int main()
{
    solve();
}
