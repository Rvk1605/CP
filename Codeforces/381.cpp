#include<Iostream>
using namespace std;
int main()
{
  int n,sum1=0,sum2=0;
  cin>>n;
  int a[n],j=n-1,k=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    if(i%2==0)
    {
      if(a[k]>a[j])
      sum1+=a[k++];
      else
      sum1+=a[j--];
    }
    else
    {
      if(a[k]>a[j])
        sum2+=a[k++];
      else
        sum2+=a[j--];
    }
  }
  cout<<sum1<<" ";
  cout<<sum2;
}
