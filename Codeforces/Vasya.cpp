#include<iostream>
using namespace std;
int main()
{
  int a,b,temp;
  cin>>a>>b;
  if(a>b)
  {
  temp = a-b;
  cout<<b<<" "<<temp/2;
  }
  else if(b>a)
  {
    temp = b-a;
    cout<<a<<" "<<temp/2;
  }
  else if(a==b)
  {
    temp=0;
  cout<<a<<" "<<temp;
  }
}
