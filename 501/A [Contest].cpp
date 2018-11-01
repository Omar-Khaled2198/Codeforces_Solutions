#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
  long a,b,c,d,v,m;
  cin>>a>>b>>c>>d;
  m=max(3*a/10,a-(a/250)*c);
  v=max(3*b/10,b-(b/250)*d);
  if(v<m)
	  cout<<"Misha"<<endl;
  else if(v==m)
	  cout<<"Tie"<<endl;
  else
	  cout<<"Vasya"<<endl;

}
