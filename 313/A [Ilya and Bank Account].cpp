#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
   string s,temp;int n;
   cin>>s;
   temp=s;
   int m=atoi(s.c_str());
   for(int i=s.size()-2;i<s.size();i++)
   {
	   temp.erase(temp.begin()+i);
	   n=atoi(temp.c_str());
	   if(m<n)
		   m=n;
	   temp=s;
   }
   cout<<m<<endl;
}
