#include<iostream>
using namespace std;
  int main()
  {
    int a[4],max=0;
    for(int i=0;i<4;i++)
    {
    cin>>a[i];
    if(a[i]>max)
    max=a[i];
    }
    for(int i=0;i<4;i++)
    {
      if(a[i]!=max)
      {
        cout<<max-a[i]<<" ";
      }
    }
  }
