#include <bits/stdc++.h>
using namespace std;

int main()
{std::ios_base::sync_with_stdio(false);

int t,n,m,a,i,j,b;
long long k;
cin>>t;
while(t--)
{
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {  b=i%4+1;
        for(j=0;j<m;j++)
        {

          if(b==1)
          cout<<"A";
          else if(b==2)
            cout<<"T";
          else if(b==3)
            cout<<"G";
        else
        cout<<"C";


        }
        cout<<endl;
    }
}
return 0;
}
