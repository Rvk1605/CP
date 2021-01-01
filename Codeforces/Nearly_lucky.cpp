#include<iostream>
using namespace std;
int main()
{
  unsigned long long int n,i,count=0;
  cin>>n;
  for(i=n;i!=0;i=i/10)
  {
    if(i%10==7||i%10==4)
    count++;
  }
  if(count==4||count==7)
  cout<<"YES";
  else
  cout<<"NO";
}
