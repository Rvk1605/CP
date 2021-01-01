#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,h,g,c=0;
  cin>>n;
  pair <int,int> arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>h>>g;
    arr[i]=make_pair(h,g);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i].first==arr[j].second)
      c++;
    }
  }
  cout<<c;
}
