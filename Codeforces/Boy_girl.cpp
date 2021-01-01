 #include<iostream>
 #include<string.h>
 using namespace std;
 int main()
 {
   int l,i,j;
   char s[1000];
   cin>>s;
   l=strlen(s);
   cout<<l<<endl;
   for(i=0;i<strlen(s)-1;i++)
   {
     for(j=i+1;j<strlen(s);j++)
     {
       if(s[i]==s[j])
       {
         l--;
         break;
       }
     }
   }
   cout<<l;
 }
