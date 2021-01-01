#include<iostream>
using namespace std;
int main()
{
  int n,temp;
  cin>>n;
  int a,b,c[n];
  for(int i=0;i<n;i++)
  {
    temp=0;
  cin>>a>>b;
  temp=a%b;
  if(temp==0)
  c[i]=temp;
  else
  {
    temp=a%b;
    c[i]=abs(b-temp);
  }
  }
  for(int i=0;i<n;i++)
  cout<<c[i]<<"\n";
}
