#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,o=0;
    cin>>n;
    unsigned long long x,l,sum=0,arr[n];
    for(int i=0;i<n;i++) {
        cin >> x;arr[i]=x;
        if (x%2==0) sum+=x;
        else o++;
    }
    if(o%2!=0)o--;
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--) {
        if (o == 0)break;
        else {
            if (arr[i] % 2 != 0) {
                sum += arr[i];
                o--;
            }
        }
    }
    cout<<sum<<endl;
}