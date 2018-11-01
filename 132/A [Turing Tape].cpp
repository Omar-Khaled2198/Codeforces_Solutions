#include <bits/stdc++.h>

using namespace std;

string binary(char ch)
{
    string s="00000000";int n=int(ch),c=7;
    while(n>0)
    {
    	if(n%2==0){s[c]='0';}
    	else
    	{
    		s[c]='1';
    	}
    	n/=2;c--;
    }
    return s;
}
long decimal(string s)
{
	int n=0,c=0;
   reverse(s.begin(),s.end());
   for(int i=s.size()-1;i>=0;i--)
   {
	   n+=pow(2,c)*(s[i]-'0');c++;
   }
   return n;
}
int main()
{
   string s;long  x,n,temp=0;
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
	   cout<<((temp-decimal(binary(s[i])))+256)%256<<endl;
	   temp=decimal(binary(s[i]));
   }

}
