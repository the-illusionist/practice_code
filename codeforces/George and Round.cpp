#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n],b[m];
    int i=0,count=0,j=0;
    for(i=0;i<n;i++)
     {
         cin>>a[i];
    }
    for(i=0;i<m;i++)
     {
         cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
        {
            count++;
            b[j]=-2;
            a[i]=-2;
            break;
        }
        }
    }
    sort(a,a+n);
    sort(b,b+m);
    if (count<n)
    {
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]<b[j] && a[i]>=0)
        {
            count++;
            b[j]=-2;
            a[i]=-2;
            sort(a,a+n);
            sort(b,b+m);
            break;
        }
        }
    }
    }
    cout<<n-count<<endl;
}
