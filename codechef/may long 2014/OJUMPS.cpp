#include <bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long long n,a;
    cin>>n;
    a=n%6;
    if (a==0 || a==1 || a==3)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;

    return 0;
}
