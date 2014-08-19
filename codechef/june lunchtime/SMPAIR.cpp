#include <bits/stdc++.h>
using namespace std;

int main()
{   unsigned long t, n, i, mini, pos,val1,val2,sum,val_pos;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unsigned long a[n];
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mini=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<=mini)
            {
                mini=a[i];
                pos=i;
            }
        }
        val1=a[pos];
        val_pos=pos;
        a[pos]=1000000;
        mini=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<=mini && i!=val_pos )
            {
                mini=a[i];
                pos=i;
            }
        }
        val2=a[pos];
        sum=val1+val2;
        //cout<<val1<<'d'<<val2<<endl;
        cout<<sum<<endl;
    }
}
