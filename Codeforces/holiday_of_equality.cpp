#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,max=0,temp;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  sum=sum+a[i];
  if(a[i]>max)
  max=a[i];
  }
  temp=max*n;
  if(n==1)
  cout<<0;
  else
  {
    cout<<temp-sum;
  }

}
