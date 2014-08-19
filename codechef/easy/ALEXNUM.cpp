#include <bits/stdc++.h>
using namespace std;

long long n,num_pair,i;
int k;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            {
                cin>>k;
            }
        num_pair = (n*(n-1))/2;
        cout<<num_pair<<endl;
    }
    return 0;
}
