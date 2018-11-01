#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x,y,a,b,c=0;
   cin>>x>>y;
   a=max(x,y);b=min(x,y);
   while(true)
   {
	   if(a==0||b==0)break;
	   if(a==1&&b==1)break;
	   if(a>2&&b>2){a++;b-=2;c++;}
	   if(a>2&&b==2){a-=2;b++;c++;}
	   if(a==2&&b>2){a++;b-=2;c++;}
	   if(a==2&&b>2){a++;b-=2;c++;}
	   if(b==2&&b>2){a-=2;b++;c++;}
	   if(a==2&&b==2){a-=2;b-=2;c++;break;}
	   if(a==1&&b>=2){a++;b-=2;c++;}
	   if(b==1&&a>=2){a-=2;b++;c++;}
   }
   cout<<c<<endl;
}
