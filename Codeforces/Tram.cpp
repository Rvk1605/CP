#include<iostream>
using namespace std;
int main()
{
  int n,count=0,a,b,max=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a>>b;
    count=count-a;
    count=count+b;
    if(count>max)
    max=count;
  }
  cout<<max;
}
