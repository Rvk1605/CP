#include<iostream>
using namespace std;
int main()
{
  int t,m,c,c1=0,c2=0;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>m>>c;
    if(m>c)
    c1++;
    else if(c>m)
    c2++;
  }
  if(c1>c2)
  cout<<"Mishka";
  else if(c2>c1)
  cout<<"Chris";
  else
  cout<<"Friendship is magic!^^";
}
