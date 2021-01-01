#include<iostream>
using namespace std;

int find()
{
    int n,temp;;
    cin>>n;
    int a[n],b[n-1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1)
    return 1;
    else
    {
      for(int i=0;i<n-1;i++)
      for(int j=i;j<n;j++)
      {
        if(a[i]>a[j])
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
    for(int i=0;i<n-1;i++)
    {
      b[i]=abs(a[i]-a[i+1]);
      if(b[i]>1)
      {
        return 0;
      }
    }
    return 1;
}
}

int main()
{
  int t;
  cin>>t;
  int a[t];
  for(int i=0;i<t;i++)
  a[i]=find();
  for(int i=0;i<t;i++)
  if(a[i]==1)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;

}
