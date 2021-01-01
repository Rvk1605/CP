#include<iostream>
#include<string.h>
using namespace std;


void check(string s)
{
  int h=1,len;
  len=(s.size()/2)+1;
  if(len<=2)
  cout<<s<<endl;

  else
  {
  char a[len];
  a[0]=s[0];
  for(int i=1;i<len-1;i++)
  {
    a[i]=s[h];
    h+=2;
  }
  a[len-1]=s[s.size()-1];
  for(int i=0;i<len;i++)
  cout<<a[i];
  cout<<endl;
  }
}

int main()
{
  int n;
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++)
  {
  getline(cin,s[i]);
  fflush(stdin);
  }
  for(int i=0;i<n;i++)
  check(s[i]);
}
