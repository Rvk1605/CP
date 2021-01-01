#include<iostream>
using namespace std;
void check()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];

  if(a[0]+a[1]<=a[n-1])
  cout<<1<<" "<<2<<" "<<n<<endl;
  else
  cout<<-1<<endl;
}

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  check();
}
