#include <bits/stdc++.h>
using namespace std;

int main()
{   int t;
long n,q,i;
unsigned long j,x,sum;
cin>>t;
while(t--)
{
cin>>n>>q;
long long arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
while(q--)
{
    cin>>x;
    unsigned long root[n],val[x];
    if(x==1 || x==2 || x==0 ||x==3 || x==4)
    {
       for(i=0;i<x+1; i++)
    {
       val[i]=i;
    }
    }

    else
    {
     for(i=0; i<x+1; i++)
    {
       val[i]=i*i;
       if(val[i]==x)
       {
           root[1]=i;
           break;
       }
       else if(val[i]>x)
       {
           root[1]=i-1;
           break;
       }
    }
    }

    for(j=2;j<n;j++)
    {
     for(i=0; i<x+1; i++)
    {
       val[i]=val[i]*i;
       if(val[i]==x)
       {
           root[j]=i;
           break;
       }
       else if(val[i]>x)
       {
           root[j]=i-1;
           break;
       }
    }

    }
    sum=x*arr[0];
    for(i=1; i<n; i++)
    {
       sum=(sum+root[i]*arr[i])%1000000007;
    }
    cout<<sum<<' ';
}
cout<<endl;
}
    return 0;
}
