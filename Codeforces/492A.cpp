#include<iostream>
using namespace std;
int main()
{
  int i=1,n,h=0,sum=0;
  cin>>n;
  if(n==1)
  cout<<1;
  else
  {
    while(h<=n)
    {
      sum=sum+i;
      h=h+sum;
      i++;
    }
    cout<<i-2;
  }

}
