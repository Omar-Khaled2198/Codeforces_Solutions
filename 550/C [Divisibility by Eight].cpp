#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<string>v;int c=0;vector<int>v2;
   stringstream ss;bool ch=false;
   for(int i=0;i<1000;i++)if(i%8==0){ss<<i;v.push_back(ss.str());ss.str(string());}
   string s,t,temp;
   cin>>s;
   for(int i=0;i<v.size();i++)
   {
	   t=v[i];
	   temp=s;
	   for(int x=0;x<t.size();x++)
	   {
		   for(int l=0;l<temp.size();l++)
		   {
			   if(t[x]==temp[l])
			   {
				   v2.push_back(l);temp[l]='z';c++;break;
			   }
		   }
	   }
	   if(c==t.size())
	   {
		   for(int x=0;x<v2.size()-1;x++){if(v2[x]<v2[x+1]){ch=true;}else {ch=false;break;}}
		   if(c==1&&t.size()==1){ch=true;cout<<"YES"<<endl<<t<<endl;break;}
		   else if(ch==true){cout<<"YES"<<endl<<t<<endl;break;}
		   else {c=0;v2.clear();}
	   }
	   else {c=0;v2.clear();continue;}

   }
   if(ch==false)cout<<"NO"<<endl;
}
