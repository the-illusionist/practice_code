#include <bits/stdc++.h>
using namespace std;
  unsigned long long fac(unsigned long long n)
{
    if (n == 1)
        return 1;
    else
        return n * fac(n - 1);}
        unsigned long long k,i,num,total;
int main()
{

    cin>>k;
   if(k==1)
    {
        cout<<2<<endl<<2<<endl;
    }
    else
       { total=pow(2,k);
    for(i=0;i<=total-1;i++)
    {
        num=(i)*total*fac(total-2);
        cout<<num<<endl;
    }
    }

return 0;
}

