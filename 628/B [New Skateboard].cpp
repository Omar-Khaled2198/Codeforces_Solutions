#include <bits/stdc++.h>

using namespace std;

int main()
{
    char t[300001];string st;long long sum=0,a=0,b=0,c=0;
    scanf("%300001s",&t);
    st=t;
    for(long long i=1;i<st.size();i++)
    {
        b=st[i]-'0';a=st[i-1]-'0';
        c=(a*10)+b;
        if(c%4==0)
        {
            sum+=i;
        }
        if(b%4==0)sum++;
    }
    if(st[0]%4==0)sum++;
    printf("%lld",sum);
}
