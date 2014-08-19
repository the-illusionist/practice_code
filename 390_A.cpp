#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>>n;
    int i,x[n],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    sort (x,x+n);
    sort (y,y+n);
    int minx=-1, countx=0, miny=-1, county=0;
    for(i=0;i<n;i++)
    {
        if(x[i]>minx)
        {
            countx++;
            minx=x[i];
        }
        if(y[i]>miny)
        {
            county++;
            miny=y[i];
        }
    }
   if (countx>=county)
   {
       cout<<county<<endl;
   }
   else cout<<countx<<endl;
}
