#include<iostream>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p;
    int a[p];
    for(int i=0;i<p;i++)
    cin>>a[i];
    cin>>q;
    int b[q];
    for(int i=0;i<q;i++)
    cin>>b[i];
    int k=1,c=0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<p;j++)
      if(a[j]==k)
      k++;
      for(int j=0;j<q;j++)
      if(b[j]==k)
      k++;

      if(k==n+1)
      break;
    }

      if(k==n+1)
        cout<<"I become the guy.";
      else
        cout<<"Oh, my keyboard!";
}
