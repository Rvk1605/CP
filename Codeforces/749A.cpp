#include<iostream>
using namespace std;
int main(){
  int k;
  cin>>k;
  if(k%2==0)
  {
  cout<<k/2<<endl;
  for(int i=0;i<k/2;i++)
  cout<<2<<" ";
  }
  else if(k%2!=0)
  {
    cout<<k/2<<endl;
    for(int i=0;i<k/2-1;i++)
    cout<<2<<" ";
    cout<<3;
  }
}
