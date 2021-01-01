#include<iostream>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n;
    int a[n],s1=0,s2=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j+=2)
        s1=s1+a[j];
    }
    for(int k=1;k<n-1;k+=2)
    {
    s2=s2+a[k];
    }
    cout<<"\n"<<s1-s1<<endl;
    if(s1-s2==0)
    {
    cout<<n;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    }
    else
    {
      n=n/2;
      for(int i=0;i<n;i++)
      a[i]=a[i+n];
    }
}}
