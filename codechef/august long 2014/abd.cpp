#include<bits/stdc++.h>
using namespace std;

int main()
{   std::ios_base::sync_with_stdio(false);
    long long t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int flag=0;
        if(x==0 && y==0)
        {
           cout<<"YES"<<endl;
                flag=1;
        }

        if(x>0 && flag==0)
        {
            if(x%2==1 && y<=x+1 && y>=(x-1)*(-1))
            {
                cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(x<0 && flag==0)
        {
            if(x%2==0 && y<=x*(-1) && y>=x)
            {
                cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(y>0 && flag==0)
        {
            if(y%2==0 && x<=y-1 && x>=y*(-1))
            {
              cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(y<0 && flag==0)
        {
            if(y%2==0 && x<=(y-1)*(-1) && x>=y)
            {
              cout<<"YES"<<endl;
                flag=1;
            }
        }
        if(flag==0)
        {
           cout<<"NO"<<endl;
        }
    }

    return 0;
}
