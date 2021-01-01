#include<iostream>
using namespace std;
int main()
{
  int n,c=0,u=0,h=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  {
    if(a[i]==-1&&h==0)
    u++;
    if(a[i]>0)
    h=h+a[i];
    if(h>0&&a[i]==-1)
    h--;
  }
  cout<<u;
}
