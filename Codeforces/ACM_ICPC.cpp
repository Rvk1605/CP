#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,c=0,k,max=0,h=0;
  cin>>n>>m;
  int b[n*m];
  string a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n-1;i++)
  {
    for(int k=i+1;k<n;k++)
    {
      c=0;
    for(int j=0;j<m;j++)
    {
      if(a[i][j]=='1'||a[k][j]=='1')
        c++;
    }
    b[h]=c;
    h++;
    if(c>max)
    max=c;
  }
}
c=0;

for(int i=0;i<h;i++)
{
  if(b[i]==max)
  c++;
}
cout<<max<<endl;
cout<<c<<endl;


}
