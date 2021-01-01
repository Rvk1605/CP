#include<iostream>
using namespace std;
int check()
{
int n,sum=0,c=0,flag=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
  cin>>a[i];
  sum=sum+a[i];
  if(a[i]%2!=0)
  c++;
}
if(sum%2!=0)
flag=1;
else if(n%2==0)
{
  if(c==0||c==n)
  flag=0;
  else
  flag=1;
}
else if(n%2!=0&&c>0)
{
  flag=1;
}
else
flag=0;
return flag;


}

int main()
{
  int t;
  cin>>t;
  int a[t];
  for(int i=0;i<t;i++)
  a[i]=check();
  for(int i=0;i<t;i++)
  {
    if(a[i]==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
}
