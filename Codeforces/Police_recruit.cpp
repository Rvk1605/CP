#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n],c1=0,c2=0,ind;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]==-1)
    ind=i;
  }
  for(int i=0;i<=ind;i++)
  {
    if(a[i]==-1)
    c1++;
    else
    c2=c2+a[i];
  }
  cout<<abs(c1-c2);
}
