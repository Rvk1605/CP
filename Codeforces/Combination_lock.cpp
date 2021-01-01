#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,temp;
  cin>>n;
  string s1,s2;
  cin>>s1>>s2;
  int a[s1.size()],b[s2.size()];
  for(int i=0;i<s1.size();i++)
  {
    if(s1[i]=='0')
    a[i]=0;
    else if(s1[i]=='1')
    a[i]=1;
    else if(s1[i]=='2')
    a[i]=2;
    else if(s1[i]=='3')
    a[i]=3;
    else if(s1[i]=='4')
    a[i]=4;
    else if(s1[i]=='5')
    a[i]=5;
    else if(s1[i]=='6')
    a[i]=6;
    else if(s1[i]=='7')
    a[i]=7;
    else if(s1[i]=='8')
    a[i]=8;
    else
    a[i]=9;
  }
  for(int i=0;i<s2.size();i++)
  {
    if(s2[i]=='0')
    b[i]=0;
    else if(s2[i]=='1')
    b[i]=1;
    else if(s2[i]=='2')
    b[i]=2;
    else if(s2[i]=='3')
    b[i]=3;
    else if(s2[i]=='4')
    b[i]=4;
    else if(s2[i]=='5')
    b[i]=5;
    else if(s2[i]=='6')
    b[i]=6;
    else if(s2[i]=='7')
    b[i]=7;
    else if(s2[i]=='8')
    b[i]=8;
    else
    b[i]=9;
  }
  for(int i=0;i<s1.size();i++)
  {
    temp=0;
    temp=abs(a[i]-b[i]);
    if(temp>5)
    temp=10-temp;
    sum=sum+temp;
  }
cout<<sum;

}
