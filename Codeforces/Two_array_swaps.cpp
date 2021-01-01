#include<iostream>
#include<algorithm>
using namespace std;

int check()
{
  int n,k,temp,sum=0,c=0;
  cin>>n>>k;
  int a[n],b[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  cin>>b[i];
  sort(a,a+n);
  sort(b,b+n);
  for(int i=0;i<n;i++)
  {
    if(c==k)
    break;
    for(int j=i;j<n;j++)
    {
      if(a[i]<b[n-j-1])
      {
        c++;
        temp=a[i];
        a[i]=b[n-i-1];
        b[n-i-1]=temp;
      }
    }
  }
  for(int i=0;i<n;i++)
  sum=sum+a[i];
  return sum;
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
