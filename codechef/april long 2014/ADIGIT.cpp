#include <bits/stdc++.h>
using namespace std;
int a[100000];
unsigned long long n,k,i,m,sum;

int main()
{
 cin>>n>>k;
 string s;
 cin>>s;

for(i=0;i<n;i++)
{
    a[i]=s[i]-48;
}
while(k--)
{
scanf( "%d", &m );
 sum=0;
for(i=0;i<m-1;i++)
{
    if(a[m-1]>=a[i])
    {
        sum=sum+a[m-1]-a[i];
    }
    else
    {
        sum=sum+a[i]-a[m-1];
    }
}
if(m==1)
{
    printf("%d\n", 0);
}
else
{
    printf("%d\n", sum);
}
}
return 0;
}
