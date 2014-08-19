#include <bits/stdc++.h>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,i,j,prime;
        cin>>a;
        cin>>b;
        if((a+b)%2==0)
        {
            c=a+b+1;
        }
        else
        {
            c=a+b+2;
        }

        if(a+b==2)
        {
            cout<<1<<endl;
        }
        else
        {
            for(i=c;i<2004;i=i+2)
            { prime=0;
                for(j=3;j<c/3+1;)
                {
                 if(i%j!=0)
                 {
                     j++;
                 }
                 else
                 {
                     prime=1;
                     break;
                 }
                }
            if(prime==0)
            {
                break;
            }
            }
            cout<<i-(a+b)<<endl;
        }
}
return 0;
}
