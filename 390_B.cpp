#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,count=0;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if (b[i]%2==0)
        {
            if(b[i]/2<=a[i])
            {
                count=count+((b[i]/2)*(b[i]/2));
            }
            else
            {
                count=count-1;
            }
        }
        if (b[i]%2!=0)
        {
            if(b[i]/2<a[i] && b[i]!=1)
            {
                count=count+((b[i]/2)*(b[i]/2+1));
            }
            else
            {
                count=count-1;
            }
        }
    }
    cout<<count<<endl;
}
