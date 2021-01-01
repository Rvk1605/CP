#include<iostream>
using namespace std;
int main()
{
  int n,face=0;
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++)
  {
  cin>>s[i];
  if(s[i][0]=='T')
  face=face+4;
  else if(s[i][0]=='C')
  face=face+6;
  else if(s[i][0]=='D')
  face=face+12;
  else if(s[i][0]=='O')
  face=face+8;
  else
  face=face+20;
  }
  cout<<face;



}
