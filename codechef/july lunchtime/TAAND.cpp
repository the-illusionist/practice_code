#include<bits/stdc++.h>
using namespace std;


int main ()
 {std::ios_base::sync_with_stdio(false);
    long long n,i,j,maxi;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxi=0;
     for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i!=j)
            {
               maxi=max(maxi, (a[i] & a[j]));
            }


        }
    }
    cout<<maxi;
    return 0;
}
