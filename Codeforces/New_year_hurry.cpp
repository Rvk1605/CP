#include<iostream>
using namespace std;
int main()
{
  int n,k,t=240,c=0,pt=0;
  cin>>n>>k;

  for(int i=1;i<=n;i++)
  {
    pt=pt+i*5;
    if(pt<=240-k)
    {
      c++;
    }
    else
    break;
  }
  cout<<c;




}
