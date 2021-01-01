#include<iostream>
using namespace std;
void check()
{
  int k,temp;
  cin>>k;
  int a[k];
  for(int i=0;i<k;i++)
  a[i]=i+1;
  temp=a[0];
  for(int i=0;i<k;i++)
  {
    a[i]=a[i+1];
  }
  a[k-1]=temp;
  for(int i=0;i<k;i++)
  cout<<a[i]<<" ";
  cout<<endl;
}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
