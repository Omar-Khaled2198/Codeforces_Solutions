#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
     string a,b;
     int c=0;
     vector<int> vec;
     cin>>a>>b;
     if(a.size()!=b.size())
    	 cout<<"NO"<<endl;
     else
     {
    	 for(int i=0;i<a.size();i++)
    	 {
    		 if(a[i]!=b[i])
    		 {
    			 c++;
    			 vec.push_back(i);
    		 }
    	 }
    	 if(c!=2)
    		 cout<<"NO"<<endl;
    	 else
    	 {
    		 swap(a[vec[0]],a[vec[1]]);
    		 if(a==b)
    			 cout<<"YES"<<endl;
    		 else
    		 {
    			 cout<<"NO"<<endl;
    		 }
    	 }
     }


}
