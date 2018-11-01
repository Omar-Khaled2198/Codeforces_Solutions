#include <bits/stdc++.h>

using namespace std;

int main()
{
     string s;bool c=false;
     cin>>s;
     vector<int>h,e,l,o;
     for(int i=0;i<s.size();i++)
     {
    	 if(s[i]=='h')h.push_back(i);
    	 else if(s[i]=='e')e.push_back(i);
    	 else if(s[i]=='l')l.push_back(i);
    	 else if(s[i]=='o')o.push_back(i);
     }
     if(h.size()>0&&e.size()>0&&l.size()>0&&o.size()>0){
     for(int i=0;i<o.size();i++)
     {
    	 for(int x=0;x<l.size()-1;x++)
    	 {
    		 for(int m=0;m<e.size();m++)
    		 {
    			 for(int n=0;n<h.size();n++)
    			 {
    				 if(h[n]<e[m]&&e[m]<l[x]&&l[x]<l[x+1]&&l[x+1]<o[i])
    				 {
    					 c=true;
    					 break;
    				 }
    			 }
    			 if(c==true)break;
    		 }
    		 if(c==true)break;
    	 }
    	 if(c==true)break;
     }
     if(c==true)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
     }
     else cout<<"NO"<<endl;

}
