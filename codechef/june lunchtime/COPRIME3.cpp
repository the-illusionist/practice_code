#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{   std::ios_base::sync_with_stdio(false);
    unsigned long n,i,j,k,count=0;;
    cin>>n;
    unsigned long a[n+2];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(gcd(a[i],gcd(a[j],a[k]))==1)
                count++;
            }
        }
    }
  cout<<count;
  return 0;
}
