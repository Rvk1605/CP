#include<iostream>
using namespace std;
int check()
{
  int m,n,sum=0;
  cin>>n>>m;
  if(n==1)
  return 0;
  if(n==2)
  return m;
  if(n>2)
  return 2*m;

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
