#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int l,n,c=0;
  cin>>n;
  char s[n];
  cin>>s;
  l=strlen(s);
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(s[i]==s[j]||s[i]+32==s[j]||s[i]-32==s[j])
      {
      c++;
      break;
    }
    }
  }
if(l-c<26)
cout<<"NO";
else
cout<<"YES";

}
