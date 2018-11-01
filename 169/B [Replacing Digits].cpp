#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s,r;
   cin>>s>>r;
   long arr[9],c=8,rl=r.size(),sl=s.size();
   char ch[9]={'1','2','3','4','5','6','7','8','9'};
   fill(arr,arr+9,0);
   for(int i=0;i<rl;i++)arr[(r[i]-'0')-1]++;
   for(int i=0;i<sl;i++)
   {
	   while(arr[c]==0){c--;}
	   if(s[i]-'0'<c+1)
	   {
		   cout<<ch[c];
		   arr[c]--;
	   }
	   else
	       cout<<s[i];
   }
}
