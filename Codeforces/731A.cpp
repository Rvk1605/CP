#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int temp=97,sum=0,diff;
  for(int i=0;i<s.size();i++)
  {
    diff=temp-s[i];
    cout<<diff<<endl;
    if(diff<0)
    diff=26+diff;
    if(diff>13)
    diff=26-diff;
    sum=sum+diff;
    temp=s[i];
  }
  cout<<sum;
}
