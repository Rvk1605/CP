#include<iostream>
using namespace std;
int main()
{
  int n,t,c=0,temp;
  cin>>n>>t;
  string a;
  cin>>a;
  for(int i=0;i<n;)
  {
    if(a[i]=='B'&&a[i+1]=='G')
    {
      c=i;
      for(int j=i+1;j<i+t;j++)
      {
        if(a[j]=='G')
        c++;
      }
      temp=a[i];
      a[i]=a[c];
      a[c]=temp;
      i=i+c;
    }
    else
    i++;
  }
  cout<<a;
}
