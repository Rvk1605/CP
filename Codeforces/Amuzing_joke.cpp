#include<iostream>
#include<string.h>

using namespace std;
int main()
{
  string a,b,c,t="1";
  int flag=0;
  getline(cin,a);
  getline(cin,b);
  getline(cin,c);

  for(int i=0;i<a.size();i++)
  {
    for(int j=0;j<c.size();j++)
    {
      if(a[i]==c[j])
      {
        c.replace(j,1,t);
        break;
      }
    }
  }
  cout<<c<<endl;
  for(int i=0;i<b.size();i++)
  {
    for(int j=0;j<c.size();j++)
    {
      if(b[i]==c[j])
      {
        c.replace(j,1,t);
        break;
      }
    }
  }
  cout<<c;
  for(int i=0;i<c.size();i++)
  {
    if(c[i]!='1')
    {
    flag=1;
    break;
    }
  }
  if(a.size()+b.size()!=c.size())
  cout<<"NO";
  else if(flag==1)
  cout<<"NO";
  else
  cout<<"YES";

}
