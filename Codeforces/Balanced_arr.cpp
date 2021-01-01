#include<iostream>
using namespace std;
void check(int n)
{
    int h,a[n],k,sum1=0,sum2=0;
    h=n/2;
    if(h%2==0)
    {
      cout<<"YES"<<endl;
      k=2;
      for(int i=0;i<h;i++)
      {
          a[i]=k;
          sum1=sum1+k;
          k=k+2;
      }
        k=1;
        for(int i=h;i<n;i++)
      {

            a[i]=k;
            sum2=sum2+k;
            k=k+2;
      }
      a[n-1]=a[n-1]+(sum1-sum2);
      for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
      cout<<endl;
    }
    else
    cout<<"NO"<<endl;;
}

int main()
{
  int t;
  cin>>t;
  int a[t];
  for(int i=0;i<t;i++)
  cin>>a[i];
  for(int i=0;i<t;i++)
  {
    check(a[i]);
  }
}
