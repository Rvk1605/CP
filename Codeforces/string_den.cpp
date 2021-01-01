#include<bits/stdc++.h>
using namespace std;
void check()
{
  int n,k,temp;
  cin>>n>>k;
  temp=n-k;
  while(k!=0)
  {
  cout<<'a';
  k--;
  }

  while(temp!=0)
  {
  if(temp>2)
  {
  cout<<"bca";
  temp-=3;
  }
  else if(temp==2)
  {
  cout<<"bc";
  temp-=2;
   }
  else
  {
    cout<<'b';
  temp--;
  }
}
}
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  check();
  cout<<endl;
 }
}
