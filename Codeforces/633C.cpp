#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  reverse(s.begin(),s.end());
  cout<<s;
  int m;
  cin>>m;
  string s1[m];
  for(int i=0;i<m;i++)
  {
    cin>>s1[i];
    transform(s1[i].begin(),s1[i].end(),s1[i].begin(),::toupper);
    transform(s1[i].begin(),s1[i].end(),s1[i].begin(),::tolower);
  }
  for(int i=0;i<m;i++)
  cout<<s1[i]<<endl;

}
