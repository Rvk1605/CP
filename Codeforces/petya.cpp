#include <iostream>
using namespace std;
int main()
{
  int flag=0;
  string a,b;
  cin>>a>>b;
  for(int i=0;i<a.size();i++)
  {
    if(a[i]==b[i]||a[i]+32==b[i]||a[i]-32==b[i])
    {
        flag=0;
    }
    else if(a[i]>=97 && b[i]>=97)
    {
      if(a[i]<b[i])
      {
      flag=-1;
      break;
      }
      else
      {
        flag=1;
        break;
      }
    }
    else if(a[i]<97 && b[i]<97)
    {
      if(a[i]<b[i])
      {
      flag=-1;
      break;
      }
      else
      {
      flag=1;
      break;
      }
    }
    else if(a[i]>=97&& b[i]<97)
    {
      if(a[i]-32<b[i])
      {
      flag=-1;
      break;
      }
      else
      {
      flag=1;
      break;
      }
    }
    else if(a[i]<97 && b[i]>=97)
    {
      if(a[i]<b[i]-32)
      {
      flag=-1;
      break;
      }
      else
      {
      flag=1;
      break;
      }
    }
  }

  cout<<flag;
}
