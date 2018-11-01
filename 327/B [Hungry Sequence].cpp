#include <bits/stdc++.h>

using namespace std;

bool prime( long long n)
{
    for( long long i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long n,c=0;
    cin>>n;
    vector<unsigned long long> v;
    for( long long i=3;i<10000000;i+=2)
    {
        if(prime(i)==true)
        {printf("%I64d\n",i);c++;}
        if(c==n)break;
    }

}