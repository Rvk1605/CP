#include<bits/stdc++.h>
#include<numeric>
using namespace std;
void check()
{
  int n,k,sum=0;
  cin>>n;
  if(n==1)
  {
  cout<<"YES"<<endl;
  return;
  }
  string s[n];
  for(int i=0;i<n;i++)
  cin>>s[i];
  int a[26]={};
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<s[i].size();j++)
    {
      k=abs(96-s[i][j]);
      a[k-1]+=1;
    }
  }

  for(int i=0;i<26;i++)
  {
  if(a[i]%n!=0)
  {
  cout<<"NO"<<endl;
  return;
  }
  }
 cout<<"YES"<<endl;
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
