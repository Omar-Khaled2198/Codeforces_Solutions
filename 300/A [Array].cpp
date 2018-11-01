#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
     int n,x,c1=0;
     cin>>x;
     bool check1=false;
     vector<int> vec1,vec2,vec3;
     for(int i=0;i<x;i++)
     {
    	 cin>>n;
    	 if(n<0&&check1==false)
    	 {
    		 vec1.push_back(n);
    		 check1=true;
    	 }
    	 else if(n>0&&c1<1)
    	 {
    		 vec2.push_back(n);
    		 c1++;
    	 }
    	 else
    	 {
    		 vec3.push_back(n);
    	 }
     }
     if(c1==0)
     {
    	 sort(vec3.begin(),vec3.end());
    	 if(vec3[0]<0&&vec3[1]<0){
    		 vec2.push_back(vec3[0]);
    	     vec2.push_back(vec3[1]);
    	     vec3.erase(vec3.begin(),vec3.begin()+2);
    	 }
     }
     cout<<vec1.size()<<" ";for(int i=0;i<vec1.size();i++)cout<<vec1[i]<<" ";
     cout<<endl;
     cout<<vec2.size()<<" ";for(int i=0;i<vec2.size();i++)cout<<vec2[i]<<" ";
     cout<<endl;
     cout<<vec3.size()<<" ";for(int i=0;i<vec3.size();i++)cout<<vec3[i]<<" ";
     cout<<endl;
}
