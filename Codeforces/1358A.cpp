#include<iostream>
using namespace std;
int check()
{
  int n,m;
  cin>>n>>m;
  if(n==1&&m==1)
  return 1;
  if((n*m)%2==0)
  return (n*m)/2;
  else
  return (n*m)/2+1;
}
 int main()
 {
   int t;
   cin>>t;
   int a[t];
   for(int i=0;i<t;i++)
   a[i]=check();
   for(int i=0;i<t;i++)
   cout<<a[i]<<endl;
 }
