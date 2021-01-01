#include<bits/stdc++.h>
using namespace std;
int * convert(string s)
{
  int a[s.size()],h=0;
  stringstream geek(s);
   int x = 0;
   geek >> x;
   for(int i=x;i!=0;i=i/10)
   {
     a[h]=i%10;
     h++;
   }
   return a;
}

int main()
{
  int n,c=0,temp;
  cin>>n;
  string s1,s2;
  cin>>s1>>s2;
  int *a,*b;
  a=convert(s1);
  b=convert(s2);

  for(int i=0;i<n;i++)
  {
    cout<<a[i];
    temp=abs(b[i]-a[i]);
    if(temp>5)
    temp=10-temp;
    c=c+temp;
  }
  cout<<c;
}
