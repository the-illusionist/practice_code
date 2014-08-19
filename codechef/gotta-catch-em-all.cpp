#include <bits/stdc++.h>
using namespace std;

int main()
{   long long n,i,day;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort (a,a+n,greater<int>());
    day=0;
    for(i=0;i<n;i++)
    {
        day=max(a[i]+i+1,day);
    }
    cout<<day+1;
    return 0;
}
