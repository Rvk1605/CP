#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,l,c,d,p,nl,np,slices,lit;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  slices=c*d;
  lit=k*l;
  lit=lit/nl;
  p=p/np;
  cout<<lit<<" "<<p<<" "<<slices<<endl;
  if(lit<=p&&lit<=slices)
  cout<<lit/n;
  else if(p<=lit&&p<=slices)
  cout<<p/n;
  else
  cout<<slices/n;


}
