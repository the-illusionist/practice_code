#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,i,j;
    cin>>n;
    float w[n][n],a[n][n],b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>w[i][j];
        }
    }
    for(i=0;i<n;i++)
    {  if(i!=j)
        {for(j=0;j<n;j++)
        {
            a[i][j]=(w[i][j]+w[j][i])/2;
            b[i][j]=(w[i][j]-w[j][i])/2;
        }
        }
        else
        {
           {for(j=0;j<n;j++)
        {
            a[i][j]=w[i][j];
            b[i][j]=0;
        }
        }
    }

}
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<b[i][j]<<' ';
        }
        cout<<endl;
    }
}
