#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int l=s.size();
   string Byte="",Short="",Int="",Long="";
   if(l<=19)
   {
   if(3-l>0){
   for(int i=0;i<3-l;i++)
	   Byte+="0";}
   Byte+=s;
   if(5-l>0){
   for(int i=0;i<5-l;i++)
	   Short+="0";}
   Short+=s;
   if(10-l>0){
   for(int i=0;i<10-l;i++)
	   Int+="0";}
   Int+=s;
   if(19-l>0){
   for(int i=0;i<19-l;i++)
	   Long+="0";}
   Long+=s;
   if(Byte<="127"&&Byte.size()==3)
	   cout<<"byte"<<endl;
   else if(Short<="32767"&&Short.size()==5)
	   cout<<"short"<<endl;
   else if(Int<="2147483647"&&Int.size()==10)
	   cout<<"int"<<endl;
   else if(Long<="9223372036854775807"&&Long.size()==19)
	   cout<<"long"<<endl;
   else
	   cout<<"BigInteger"<<endl;
   }
   else
	   cout<<"BigInteger"<<endl;

}
