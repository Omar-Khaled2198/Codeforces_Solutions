#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,n1,n2,x,z1=0,z2=0,c=0,count=0,temp=0;
  cin>>n;
  string t1="",t2="";
  vector<int>v1,v2;
  cin>>n1;
  for(int i=0;i<n1;i++){cin>>x;v1.push_back(x);}
  cin>>n2;
  for(int i=0;i<n2;i++){cin>>x;v2.push_back(x);}
  set<string>st;
  while(true)
  {
      c=0;t1="";t2="";count++;
      z1=z2=0;
      for(int i=0;i<v1.size();i++)
      {
          for(int x=0;x<v2.size();x++)
          {
              if(v1[i]>v2[x]&&v1[i]!=0&&v2[x]!=0)
              {
                  v1.push_back(v2[x]);
                  v1.push_back(v1[i]);
                  v1[i]=v2[x]=0;c=1;break;
              }
              else if(v1[i]<v2[x]&&v1[i]!=0&&v2[x]!=0)
              {
                  v2.push_back(v1[x]);
                  v2.push_back(v2[i]);
                  v1[i]=v2[x]=0;c=1;break;
              }
          }
          if(c==1)break;
      }
      for(int i=0;i<v1.size();i++){if(v1[i]!=0){t1+=char(v1[i]+'0');z1++;}}
      for(int i=0;i<v2.size();i++){if(v2[i]!=0){t2+=char(v2[i]+'0');z2++;}}
      st.insert(t1);st.insert(t2);
      if(st.size()==temp)
      {
          cout<<-1<<endl;break;
      }
      else
      {
          temp=st.size();
      }
      z1=v1.size()-z1;z2=v2.size()-z2;
      if(z1==v1.size()){cout<<count<<" "<<2<<endl;break;}
      if(z2==v2.size()){cout<<count<<" "<<1<<endl;break;}
  }
}
