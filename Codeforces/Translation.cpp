#include<iostream>
using namespace std;
int main()
{
  string s1,s2;
  cin>>s1>>s2;
  int flag=0, l=s1.size();
  for(int i=0;i<l;i++)
  {
    if(s1[i]==s2[l-i-1])
    {
    flag=0;
    continue;
   }
    else
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  cout<<"YES";
  else
  cout<<"NO";
}
