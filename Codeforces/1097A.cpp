#include<iostream>
using namespace std;
int main()
{
  int flag=0;
  string t,s[5];
  cin>>t;
  for(int i=0;i<5;i++)
  cin>>s[i];
  for(int i=0;i<5;i++)
  {
    if(t[0]==s[i][0]||t[1]==s[i][1])
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  cout<<"NO";
  else
  cout<<"YES";
}
