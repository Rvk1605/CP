#include<iostream>
using namespace std;
int main()
{
  int n,k=0,h=0,team,temp;
  cin>>n;
  int a[n],t1=0,t2=0,t3=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  team=n/3;
  cout<<team<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(a[i]==1&&t1!=i+1)
      {
        t1=i+1;
        k++;
      }
      else if(a[i]==2&&t2!=i+1)
      {
        t2=i+1;
        k++;
      }
      else if(a[i]==3&&t3!=i+1)
      {
        t3=i+1;
        k++;
      }
    }
    if(k%3==0)
    cout<<t1<<" "<<t2<<" "<<t3<<endl;
  }
}
