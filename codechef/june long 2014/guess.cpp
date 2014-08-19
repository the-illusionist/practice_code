#include <bits/stdc++.h>
using namespace std;

int main()
{  long long t, n, m;
    cin>>t;
   while(t--)
   {
       cin>>n>>m;
       if(n==1 && m==1)
       {
           cout<<"0"<<"/"<<"1"<<endl;
       }
       else if(n%2!=0 && m%2!=0)
       {
           cout<<(n*m-1)/2<<"/"<<n*m<<endl;
       }
       else
       {
           cout<<"1"<<"/"<<"2"<<endl;
       }
   }
    return 0;
}
