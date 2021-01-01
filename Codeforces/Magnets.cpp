#include<iostream>
using namespace std;
int main()
{
     int n,count=0;
     cin>>n;
     string s[n];
     for(int i=0;i<n;i++)
     {
        cin>>s[i];
      if(s[i][0]=='1'&&s[i+1][0]=='1'||s[i][0]=='0'&&s[i+1][0]=='0')
        count++;
     }
     cout<<count;

}
