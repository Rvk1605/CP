#include<bits/stdc++.h>
using namespace std;
int check()
{
  int n,temp,c=0,w=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  {
    if(n==1&&i%2!=a[i]%2)
    return -1;
    for(int j=0;j<n;j++)
    {
    if(j%2==a[j]%2)
    {
      c++;
    }
    else
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        w++;
      }
    }
  }
  if(c==n)
  return w;
  else
  return -1;
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
