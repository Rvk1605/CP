
#include<iostream>
using namespace std;
int main()
{
     int n;
     float c=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        c=c+a[i];
     }
     cout<<c/(n);

}
