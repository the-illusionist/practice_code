#include <bits/stdc++.h>
using namespace std;
long b[1000000];
int main()
{ios_base::sync_with_stdio(false);
long i, n,j;
cin >> n;
long a[n];
for(i=0;i<1000000;i++)
{
    b[i]=0;
}
for(i=0;i<n;i++)
{
    cin>>a[i];
    b[a[i]]++;
}
for(i=0;i<1000000;i++)
{
    while(b[i]--)
    {
            cout<<i<<endl;
    }
}
return 0;
}
