#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,k,i,j,count;
    cin >> n;
    if (n%2==0)
    {
        count=(n/2)*n;
        cout<<count<<endl;
        for(i=1;i<=n/2;i++)
        {
            for(j=1;j<=n/2;j++)
            {cout<<"C.";}
            cout<<endl;
            for(k=1;k<=n/2;k++)
            {cout<<".C";}
            cout<<endl;
        }
    }
    else
    {
        count=((n+1)/2)*((n+1)/2)+(n/2)*(n/2);
        cout<<count<<endl;
        for(i=1;i<=n/2;i++)
        {
            for(j=1;j<=(n-1)/2;j++)
            {cout<<"C.";}
            cout<<"C"<<endl;
            for(k=1;k<=(n-1)/2;k++)
            {cout<<".C";}
            cout<<"."<<endl;
        }
        for(j=1;j<=(n-1)/2;j++)
            {cout<<"C.";}
            cout<<"C"<<endl;
    }



    return(0);
}
