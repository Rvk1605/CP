#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
  int temp;
  temp=*a;

int main()
{
  int n,c=0,large=0,small,il,is;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  }
  small=a[0];
  for(int i=0;i<n;i++)
  {
    if(large<a[i])
    {
    large=a[i];
    il=i;
    }
    if(a[i]<=small)
    {
    small=a[i];
    is=i;
    }
  }
  c=(il-0)+(abs(n-is-1));
  if(is<il)
    c--;

  cout<<c;



}
