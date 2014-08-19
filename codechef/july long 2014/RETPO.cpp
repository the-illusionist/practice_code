#include <bits/stdc++.h>
using namespace std;

int main()
{
std::ios_base::sync_with_stdio(false);
long long t,x,y,val,maxi,mini;
cin>>t;
while(t--)
{
    cin>>x>>y;
    if(x<0)
    {
        x=x*(-1);
    }
    if(y<0)
    {
        y=y*(-1);
    }

    if(y>=x)
    {
        if((y-x)%2==0)
        {
            val=y*2 ;
        }
        else
        {
            val=y*2-1 ;
        }
    }
    if(x>y)
    {
        if((x-y)%2==0)
        {
            val=x*2 ;
        }
        else
        {
            val=x*2+1 ;
        }
    }

    cout<<val<<endl;

}
 return 0;
}
