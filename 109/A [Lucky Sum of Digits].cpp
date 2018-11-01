#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() 
{
	int t,c7=0,c4=0,temp,sum;string f="";
	cin>>t;
	temp=t/7;
	temp*=7;
	c7=t/7;
	while((t-temp)%4!=0)
	{
		temp-=7;
		c7--;
	}
	c4=(t-temp)/4;
	for(int i=0;i<c4;i++){f+='4';sum+=4;}
	for(int i=0;i<c7;i++){f+='7';sum+=7;}
    if(sum!=t)
       cout<<-1<<endl;
    else
       cout<<f<<endl;
	
	
	
	
}