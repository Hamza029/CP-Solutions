#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, res = 0;
    cin >> n;
    vector <int> v(n), cnts(1000005, 0);
    vector <bool> visited(1000005, false);
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
        cnts[val]++;
    }
    for(int i = 0; i <= 1000000; i++)
    {
        if(cnts[i] == 0 || visited[i]) continue;
        if(cnts[i] == 1 && !visited[i]) res++;
        for(int j = i; j <= 1000000; j+=i) visited[j] = true;
    }
    cout << res << endl;
    return;
}

int main()
{
    solve();
}
