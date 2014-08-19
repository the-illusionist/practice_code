#include <bits/stdc++.h>
using namespace std;

int main()
{
long n,i,max,max2,j;

cin>>n;
long a[n];
for(i=0;i<n;i++)
{
cin>>a[i];
}
max=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
      max=a[i];
    }
}
max2=max;
for(i=0;i<max;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[j]>=max2)
        {
            cout<<"*"<<" ";
        }
        else
        {
            cout<<"  ";
        }

    }
    max2--;
    cout<<endl;
}
return 0;
}
