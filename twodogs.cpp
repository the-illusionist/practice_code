#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
unsigned long n,x,t,i;
cin>>n>>x;
unsigned long a[n],c[n],l=0,r=n-1,b[n],j=0,k,pf1,pf2,pf3,pf4,sum=0,ans=10000000,g;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
    c[i]=a[i];
}
sort (a,a+n);
while(l<r)
{
    if (a[l]+a[r]==x)
    {
        b[j]=a[l];
        b[j+1]=a[r];
        j=j+2;
        l++;
        r--;
    }
    else if( a[l] + a[r] <x )
    {
        l++;
    }
    else r--;
}
/*for(i=0;i<j;i++)
{
    cout<<'h'<<b[i];
}*/
for(k=0;k<j;k=k+2)
{
   for(i=0;i<=n/2+1;i++)
{
    if (c[i]==b[k])
    {
        pf1=i+1;
        g=i;
        break;
    }
}
   for(i=0;i<=n/2+1;i++)
{
    if (b[k+1]==c[i] && i!=g)
    {
        pf2=i+1;
        break;
    }
}
for(i=n-1;i>=n/2-1;i--)
{
    if (b[k+1]==c[i])
    {
        pf3=n-i;
        g=i;
        break;
    }
}
   for(i=n-1;i>=n/2-1;i--)
{
    if (b[k]==c[i] && i!=g)
    {
        pf4=n-i;
        break;
    }
}
sum=max(min(pf1,pf4),min(pf2,pf3));
ans= min(sum,ans);
}
if(sum>0)
{
    cout<<ans<<endl;

}
else cout<<'-'<<'1'<<endl;
}
