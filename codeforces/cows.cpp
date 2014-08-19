#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,i,j,total=0,l,min;
    cin>>n;
    int array[n+1],count[n+1];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(i=0;i<n;i++)
    {
        count[i]=0;
    }
    min=n+1;
    for(i=0;i<n;i++)
    {
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if (j<i && array[j]==1)
           {
               count[i]++;
           }
           else if (j>i && array[j]==0)
           {
               count[i]++;
           }
       }
    }
    for(i=0;i<n;i++)
    {
        if(count[i]<min)
            min=count[i];
            l=i;
    }
    count[l]=2;
    total=total+min;
    }
    cout<<total<<endl;
    return(0);
}
