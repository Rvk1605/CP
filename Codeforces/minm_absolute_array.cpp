#include<iostream>
using namespace std;
int main()
{
  int n,h=0,min=0;
  cin>>n;
  int a[n],b[2*n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
  {
    b[h]=abs(a[i]-a[j]);
    if(b[h]>0)
    min=b[h];
    h++;
  }
  for(int i=0;i<h;i++)
  {
    if(b[i]>0&&b[i]<min)
    {
      min=b[i];
    }
  }
  cout<<min;
}
