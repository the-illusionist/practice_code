#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long t,n,k,i;
 cin>>t;
 while(t--)
 {
     cin>>n>>k;
     long long a[n];
     long long count=0;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         if(a[i]%2==0)
         {
             count++;
         }
     }
     if(count==n && k==0)
     {
         cout<<"NO"<<endl;
     }
     else if(count>=k)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
 }
return 0;
}
