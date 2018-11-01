#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0,l;
   cin>>n;
   int m[59]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,};
   int a[n];
       for(int i=0;i<n;cin>>a[i],i++);
       if(n==1&&a[0]==15)cout<<"DOWN"<<endl;
       else if(n==1&&a[0]==0)cout<<"UP"<<endl;
       else if(n==1&&a[0]!=0&&a[0]!=15)cout<<-1<<endl;
       else{
           for(int x=0;x<59;x++)
           {
               if(a[n-1]==m[x]&&a[n-2]==m[x+1]){l=x+1;break;}
           }

       if(l>a[n-1])cout<<"UP"<<endl;
       else cout<<"DOWN"<<endl;}
}
