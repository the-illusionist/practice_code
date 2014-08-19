#include <bits/stdc++.h>
using namespace std;

int main()
{
long long n,w,i;
int k,q;
string h;
 cin>>n>>k>>w;
 cin>>h;
 long long l[w],r[w];
 for(i=0;1<w;i++)
 {   string s;
     cin>>l[i]>>r[i];
     q=k;
     long long a[r[i]-l[i]];
     for(j=0;j<r[i];j++)
     {
         if (j==l[i]+q-1)
         {
            s+='1';
            q=q+k;
         }
         else s+='0';
     }
     for()
 }

}
