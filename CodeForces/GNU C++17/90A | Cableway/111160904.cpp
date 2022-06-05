#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int r,g,b; cin>>r>>g>>b;
 int cnt=0;
 r-=2;
 int i=2;
 while(r>0 || g>0 || b>0)
 {
  if(i==1) r-=2,i=2;
  else if(i==2) g-=2,i=3;
  else if(i==3) b-=2,i=1;
  cnt++;
 }
 cout<<30+cnt<<endl;
}