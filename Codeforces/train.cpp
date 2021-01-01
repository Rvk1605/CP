#include<iostream>
using namespace std;
void check(int x,int y)
{
  int c=0;
  int a[x],b[y];
  for(int i=0;i<x;i++)
  cin>>a[i];
  for(int i=0;i<y;i++)
  cin>>b[i];
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<y;j++)
    {
      if(a[i]==b[j])
      c++;
    }
  }
  cout<<c<<endl;

}

int main()
{
  int t,n,m;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n>>m;
    check(n,m);
  }
}
