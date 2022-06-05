#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll N, X;
    cin>>N>>X;
    string S;
    //getchar();
    cin>>S;

    for(ll i = 0; i < S.size(); i++)
    {
        if(S[i]=='o') X++;
        else if(S[i]=='x' && X>0) X--;
    }

    cout << X << endl;

}
