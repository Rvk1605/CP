#include<iostream>
using namespace std;
int check()
{
  int a[3],n,max=0,sum=0;
  for(int i=0;i<3;i++)
  {
    cin>>a[i];
    if(a[i]>max)
    max=a[i];
  }
  cin>>n;
  for(int i=0;i<3;i++)
  {
    if(a[i]!=max)
    sum=sum+(max-a[i]);
  }
  if(n<sum)
  return 0;
  else
  {
    n=n-sum;
    if(n%3==0)
    return 1;
    else
    return 0;
  }
}
int main()
{
  int t;
  cin>>t;
  int a[t];
  for(int i=0;i<t;i++)
  {
    a[i]=check();
  }
  for(int i=0;i<t;i++)
  {
    if(a[i]==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
}
