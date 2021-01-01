#include<bits/stdc++.h>
using namespace std;
long long int check()
{
  long long int a,b,diff,c=0;
  cin>>a>>b;
  if(a==b)
  return 0;
  diff=abs(a-b);
  while(diff!=0)
  {
    if(diff>9)
    {
    c=c+diff/10;
    diff=diff%10;
    }
    else if(diff>8)
    {
      c=c+diff/9;
      diff=diff%9;
    }
    else if(diff>7)
    {
      c=c+diff/8;
      diff=diff%8;
    }
    else if(diff>6)
    {
      c=c+diff/7;
      diff=diff%7;
    }
    else if(diff>5)
    {
      c=c+diff/6;
      diff=diff%6;
    }
    else if(diff>4)
    {
      c=c+diff/5;
      diff=diff%5;
    }
    else if(diff>3)
    {
      c=c+diff/4;
      diff=diff%4;
    }
    else if(diff>2)
    {
      c=c+diff/3;
      diff=diff%3;
    }
    else if(diff>1)
    {
      c=c+diff/2;
      diff=diff%2;
    }
    else
    c++;
  }
  return c;
}

int main()
{
  int n;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++)
  a[i]=check();
  for(int i=0;i<n;i++)
  cout<<a[i]<<endl;
}
