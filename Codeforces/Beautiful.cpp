#include<iostream>
#include<math.h>
using namespace std;
int check(int n)
{
  int f=0,temp;
  int a[4];
  for(int i=n;i!=0;i=i/10 )
  {
    a[f]=i%10;
    f++;
  }
  for(int i=0;i<4;i++)
  for(int j=i+1;j<4;j++)
  {
    if(a[i]==a[j])
    return 0;
  }
  return 1;
}

int main()
{
int year,r=0;
cin>>year;
for(int i=1;i<100;i++)
if(r==0)
{
r=check(++year);
}
else
{
  cout<<year;
break;
}
}
