#include<iostream>
using namespace std;
int main()
{
  int n,count=0;
  cin>>n;
  for(int i=0;i<1000;i++)
  {
    if(n>=5)
    {
    count=count+n/5;
    n=n%5;
    }
    if(n>=4)
    {
    count=count+n/4;
    n=n%4;
    }
    if(n>=3)
    {
    count=count+n/3;
    n=n%3;
    }
    if(n>=2)
    {
    count=count+n/2;
    n=n%2;
    }
    if(n==1)
    {
    count++;
    n=n%1;
    }
    if(n==0)
    break;
  }
  cout<<count;

}
