#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n,x,mini=0,temp,index1,index2;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
    	cin>>x;
    	vec.push_back(x);
    }
    mini=vec[0]-vec[1];
    index1=0;index2=1;
    if(mini<0)mini=-mini;
    for(int i=1;i<n-1;i++)
    {
    	temp=vec[i]-vec[i+1];
    	if(temp<0)temp=-temp;
    	if(mini>temp)
    	{
    		mini=temp;
    		index1=i;
    		index2=i+1;
    	}
    }
    temp=vec[0]-vec[vec.size()-1];
    if(temp<0)temp=-temp;
    if(mini>temp)
    {
    	index1=0;
    	index2=vec.size()-1;
    }
    cout<<index1+1<<" "<<index2+1<<endl;
}
