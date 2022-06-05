#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
void solve()
{
 ll n,k; cin>>n>>k;
 if(k<n && n%k==0) {cout<<1<<endl; return;}
 if(k>n && k%n==0) {cout<<(k/n)<<endl; return;}
 if(k==n) {cout<<1<<endl; return;}
 if(k<n)
 {
  cout<<2<<endl;
  return;
 }
 ll res=k/n;
 if(k%n!=0) res++;
 cout<<res<<endl;
}
 
int main()
{
 int t;
 cin >> t;
 while(t--)
 {
  solve(); 
 }
 
 return 0;
}