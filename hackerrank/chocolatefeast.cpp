#include <bits/stdc++.h>
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    int t;
    long n, c, m,count,k;

    cin >> t;
    while (t--)
    {
        cin>>n>>c>>m;
        count=n/c;
        k=count;
        while(k/m)
        {
            count=count+k/m;
            k=k/m+k%m;
        }
        cout<<count<<endl;
    }

    return(0);
}
