#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int u=0,l=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>=97)
    l++;
    else
    u++;
  }
  if(l>=u)
  {
    for(int i=0;i<s.size();i++)
    {
      if(s[i]<97)
      s[i]=s[i]+32;
    }
  }
  else
  {
    for(int i=0;i<s.size();i++)
    {
      if(s[i]>=97)
      s[i]=s[i]-32;
    }
  }
  cout<<s;
}
