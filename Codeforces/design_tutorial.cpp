#include<iostream>
using namespace std;
int check(int n)
{
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}
int main()
{
  int n,a,b;
  cin>>n;
    if(n%2==0)
    {
      a=n/2;
      b=n/2;
    }
    else
    {
    a=n/2+1;
    b=n/2;
    }
    while(check(a)==0 && check(b)==0)
    {
      a--;
      b++;
    }
cout<<a<<" "<<b;
}
