#include<iostream>
using namespace std;
int main()
{
  int a[3],min,max=0 ;
  for(int i=0;i<3;i++)
  {
    cin>>a[i];
    if(a[i]>max)
    max=a[i];
  }
  min=a[0];
  for(int i=0;i<3;i++)
  if(a[i]<min)
  min=a[i];
  cout<<abs(max-min);

}
