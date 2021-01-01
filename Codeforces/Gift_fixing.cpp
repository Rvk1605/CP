#include<bits/stdc++.h>
using namespace std;
long long int check()
{
  long long int n,min1,min2,c=0,temp,temp2;
  cin>>n;
  long long int a[n],b[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  cin>>b[i];
  min1=*min_element(a,a+n);
  min2=*min_element(b,b+n);
  for(int i=0;i<n;i++)
  {
    if(a[i]>min1&&b[i]>min2)
    {
      temp=a[i]-min1;
      temp2=b[i]-min2;
      if(temp>temp2)
      c=c+temp;
      else
      c=c+temp2;
    }
    else if(a[i]>min1&&b[i]==min2)
    c=c+(a[i]-min1);
    else if(a[i]==min1&&b[i]>min2)
    c=c+(b[i]-min2);
    else
    continue;
  }
return c;
}
int main()
{
  int t;
  cin>>t;
  long long int a[t];
    for(int i=0;i<t;i++)
    a[i]=check();
    for(int i=0;i<t;i++)
    cout<<a[i]<<endl;
}
