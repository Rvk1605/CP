#include<iostream>
using namespace std;
void check()
{
  int a,b,c;
  cin>>a>>b>>c;
  if((a+b+c)<9||a==0||b==0||c==0)
  {
  cout<<"NO"<<endl;
  return;
  }
  int i=6;
  while(i<(a+b+c)/2)
  {
    if((a+b+c)%i==3)
    {
      cout<<"YES"<<endl;
      return;
    }
    i+=7;
  }
  cout<<"NO"<<endl;
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
