#include<iostream>
using namespace std;
int main()
{
  int t,w;
  cin>>t;
  int a[t];
  for(int i=0;i<t;i++)
  cin>>a[i];
  for(int i=0;i<t;i++)
  {
    if(a[i]==1)
    w=0;
    else if(a[i]%2==0)
    w=(a[i]/2)-1;
    else
    w=(a[i]/2);
    cout<<w<<endl;

  }

}
