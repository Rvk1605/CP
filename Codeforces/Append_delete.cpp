  #include<bits/stdc++.h>
  #include<string.h>
  using namespace std;
  int main()
  {
    int flag=0,pos,j=0,c=0,n;
    string s1,s2;
    cin>>s1>>s2;
    cin>>n;
    if(s1.size()<s2.size())
    {
      cout<<"No"<<endl;
      return 0;
    }
    if(s1==s2)
    {
      cout<<"Yes"<<endl;
      return 0;
    }
    pos=s1.find(s2);

    if(s2.find(s1)!=-1&&(s2.size()-s1.size())<=n)
    {
      flag=1;
    }
    else if(pos!=-1)
    {
      if(s1.size()-s2.size()<=n)
      flag=1;
    }
    else
    {
      for(int i=0;i<s1.size();i++)
      {
        if(s1[i]==s2[i])
          c++;
      }
      c=s1.size()-c;
      if(c<=n)
      flag=1;
    }

    if(flag==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  }
