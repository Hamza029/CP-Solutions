#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int r,c;
 for(int i=1; i<=5; i++)
 {
  for(int j=1; j<=5; j++)
  {
   int val;
   cin>>val;
   if(val==1)
   {
    r=i;
    c=j;
   }
  }
 }
 int cnt=abs(3-r)+abs(3-c);
 cout<<cnt<<endl;
 
 return 0;
}