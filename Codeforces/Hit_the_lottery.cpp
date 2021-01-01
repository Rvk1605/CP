#include<iostream>
using namespace std;
int main()
{
  int n,c=0;
  cin>>n;
  while(n!=0)
  {
    if(n>=100)
    {
      c=c+n/100;
      n=n%100;
    }
    else if(n>=20)
    {
      c=c+n/20;
      n=n%20;
    }
    else if(n>=10)
    {
      c=c+n/10;
      n=n%10;
    }
    else if(n>=5)
    {
      c=c+n/5;
      n=n%5;
    }
    else
    {
      c=c+n;
      n=n%1;
    }
  }
  cout<<c;
}
