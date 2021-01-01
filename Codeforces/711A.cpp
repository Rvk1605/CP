#include<iostream>
using namespace std;
int main()
{
  int n,c1=-1,c2=-1,flag=0;
  cin>>n;
  char a[n][5];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<5;j++)
    {
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++)
  {
    if(a[i][0]=='O'&&a[i][1]=='O')
    {
      c1=i;
      flag=1;
      break;
    }
    if(a[i][3]=='O'&&a[i][4]=='O')
    {
      c2=i;
      flag=1;
      break;
    }
  }
  if(c1!=-1)
  {
  a[c1][0]='+';
  a[c1][1]='+';
  }
  else if(c2!=-1)
  {
    a[c2][3]='+';
    a[c2][4]='+';
  }

  if(flag==1)
  {
  cout<<"YES"<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<5;j++)
    {
      cout<<a[i][j];
    }
    cout<<endl;
  }
}
  else
  cout<<"NO"<<endl;
}
