#include<iostream>
#include<math.h>
using namespace std;

int count(int n)
{
  int r,c=0;
  for(int i=n;i!=0;i=i/10)
  {
    r=i%10;
    if(r!=0)
    c++;
  }
return c;
}
void sum(int n)
{
  int r,k=0;
  cout<<count(n)<<endl;
  for(int i=n;i!=0;i=i/10)
  {
    r=i%10;
    if(r!=0)
    cout<<pow(10,k)*r<<" ";
    k++;
  }
}

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    sum(a[i]);
    cout<<endl;
  }
}
