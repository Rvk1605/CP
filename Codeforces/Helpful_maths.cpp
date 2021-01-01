 #include<iostream>
 #include<string.h>
 using namespace std;
 int main()
 {
   string a;
   cin>>a;
   int s[50],h=0,temp;
   for(int i=0;i<a.size();i+=2)
   {
     s[h]=(int)a[i];
     h++;
   }
   for(int i=0;i<h;i++)
   {
     for(int j=0;j<h-1;j++)
     {
       if(s[j]>s[j+1])
       {
         temp=s[j];
         s[j]=s[j+1];
         s[j+1]=temp;
       }
     }
   }
   for(int i=0;i<h;i++)
   {
     cout<<(char)s[i]<<" ";
   }
 }
