#include<bits/stdc++.h>
using namespace std;
void check()
{
  int n,m,c=0;
  cin>>n>>m;
  char a[n][m];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
      if(a[i][j]=='*')
      c++;
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<m-1;j++)
    {
      if(a[i][j]=='*'&&a[i+1][j]=='*'&&a[i+1][j+1]=='*'&&a[i+1][j-1]=='*')
      c++;
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=2;j<m-2;j++)
    {
      if(a[i][j]=='*'&&a[i+1][j]=='*'&&a[i+1][j+1]=='*'&&a[i+1][j-1]=='*'&&a[i+2][j]=='*'&&a[i+2][j-1]=='*'&&a[i+2][j-2]=='*'&&a[i+2][j+1]=='*'&&a[i+2][j+2]=='*')
      c++;
    }
  }
  cout<<c<<endl;;
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
