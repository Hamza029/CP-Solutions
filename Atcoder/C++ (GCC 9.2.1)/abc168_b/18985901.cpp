#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    int k;
    cin >> k >> s;
    int len = s.length();
    if(len <= k)
    {
        cout << s << endl;
        return;
    }
    string s1 = s.substr(0, k);
    s1.append("...");
    cout << s1 << endl;
    return;
}

int main()
{
    solve();
}