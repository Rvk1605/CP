#include<iostream>
using namespace std;
int main()
{
  int n,ac=0,dc=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='A')
    ac++;
    else
    dc++;
  }
  if(ac>dc)
  cout<<"Anton";
  else if(ac<dc)
  cout<<"Danish";
  else if(ac==dc)
  cout<<"Friendship";

}
