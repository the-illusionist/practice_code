#include <bits/stdc++.h>
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    long t,n,i;
    double k,l;

    cin >> t;
    while (t--)
    {   cin >> n;
        k=sqrt(5*n*n+4);
        l=sqrt(5*n*n-4);


        if (int(k)==k || int(l)==l)
        {
            cout << "IsFibo" <<endl;
        }
        else
        {
            cout << "IsNotFibo" <<endl;
        }
    }

    return(0);
}
