#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int f=0,se=0;
   for(int i=0;i<s.size();i++)
   {
	   if(s[i]=='4')f++;
	   if(s[i]=='7')se++;
   }
   if(f==0&&se==0)
   {
	   cout<<-1<<endl;
   }
   else
   {
	   if(f>=se)
	   {
		   cout<<4<<endl;
	   }
	   else
		   cout<<7<<endl;
   }

}
