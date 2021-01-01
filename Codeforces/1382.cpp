#include<iostream>
using namespace std;

void check()
{
  int n,m,l=0,count=0,mid;
  cin>>n>>m;
  int a[n],b[m],c[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<m;i++)
  cin>>b[i];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i]==b[j])
      {
        c[l++]=a[i];
        count=1;
      break;
    }
    }
    if(count==1)
    break;
  }
  if(count==0)
  cout<<"NO"<<endl;
  else
  {
    cout<<"YES"<<endl;
    cout<<count<<" ";
    cout<<c[0]<<" ";
    cout<<endl;
  }


}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
