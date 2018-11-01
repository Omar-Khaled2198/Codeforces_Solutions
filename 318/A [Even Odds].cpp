#include <bits/stdc++.h>

using namespace std;

int main()
{
     unsigned long long n,k,e,o,c;
     cin>>n>>k;
     if(n%2==0){e=o=n/2;}
     else {e=n/2;o=(n/2)+1;}
     if(k>o)
     {
    	 c=2;
    	 k-=o;
    	 for(unsigned long long i=1;i<k;i++)
    	 {
    		 c+=2;
    	 }
    	 cout<<c<<endl;
     }
     else
     {
    	 c=1;
    	 for(unsigned long long i=1;i<k;i++)
    	 {
    		 c+=2;
    	 }
    	 cout<<c<<endl;
     }



}
