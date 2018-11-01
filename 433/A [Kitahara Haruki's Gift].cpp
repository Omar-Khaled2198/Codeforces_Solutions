#include <iostream>
using namespace std;

int main() {
	int n,x,h1=0,h2=0,sum=0;
	cin>>n;bool c=false;
	for(int i=0;i<n;i++)
	{
		cin>>x;sum+=x;
		if(x==100)h1++;
		else if(x==200)h2++;
	}
	sum/=2;
		for(int i=0;i<=h2;i++)
		{
			for(int l=0;l<=h1;l++)
			{
				if(i*200+l*100==sum)
				{
					cout<<"YES"<<endl;c=true;break;
				}
			}
			if(c==true)break;
		}
		if(c==false)cout<<"NO"<<endl;
}