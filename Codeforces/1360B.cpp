#include<iostream>
using namespace std;
int check()
{
  int n,min,d;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  min=abs(a[0]-a[1]);
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      d=abs(a[i]-a[j]);
      if(min>d)
      min=d;
    }
  }
  return min;
}
 int main()
 {
   int t;
   cin>>t;
   int a[t];
   for(int i=0;i<t;i++)
   a[i]=check();
   for(int i=0;i<t;i++)
   cout<<a[i]<<endl;
 }
