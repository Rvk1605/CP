#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,c=0;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<s.size()-2;i++)
  {
    if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
    c++;
  }
  cout<<c;
}
