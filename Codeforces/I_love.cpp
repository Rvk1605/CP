#include<iostream>
using namespace std;
int main()
{
  int n,large,small,c=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  large=a[0];
  small=a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i]>large)
    {
      large=a[i];
      c++;
    }
    if(a[i]<small)
    {
    small=a[i];
    c++;
  }
  }
  cout<<c;

}
