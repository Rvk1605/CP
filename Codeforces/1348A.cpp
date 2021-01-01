#include<bits/stdc++.h>
using namespace std;
int check()
{
  int n,max,min=0,i;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  a[i]=pow(2,i+1);
  if(n==2)
  return a[1]-a[0];
  else
  {
  max=*max_element(a,a+n);
  for(i=0;i<n/2-1;i++)
  max=max+a[i];
  for(;i<n-1;i++)
  min=min+a[i];
  cout<<max<<" "<<min<<endl;
  return abs(max-min);
 }
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
