#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int n,count=0;
  cin>>n;
  char a[n];
  cin>>a;
  for(int i=0;i<n-1;i++)
  {
    if(a[i]==a[i+1])
    count++;
  }
  cout<<count;
}
