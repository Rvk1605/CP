#include<iostream>
using namespace std;
int main()
{
  int k,r,c=0,temp=0;
  cin>>k>>r;
  for(int i=1;i<10000;i++)
  {
    temp=k*i;
    c++;
    if((temp-r)%10==0||temp%10==0) 
    break;
  }
  cout<<c;
}
