#include<iostream>
using namespace std;
int main()
{
  int k,l,m,n,d,count=0,c=0;
  cin>>k>>l>>m>>n>>d;
  if (k==1||l==1||m==1||n==1)
  cout<<d;
  else
  {
  for(int i=1;i<d;i++)
  {
    if(i%k && i%l  ||i%l && i%m||i%m && i%n)
    count++;
  }
  cout<<count;
  }
}
