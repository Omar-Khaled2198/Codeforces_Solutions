#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
  int n,b,f=0,nf=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
	  cin>>b;
	  if(b==1)f++;
	  else if(b==0)nf++;
  }
	  if(nf==1&&f!=0||f==1&&n==1)
		  cout<<"YES"<<endl;
	  else
		  cout<<"NO"<<endl;
}
