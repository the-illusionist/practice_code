#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t,n,i,j,count,val;
string str;
cin>>t;

while(t--)
{   count=0;
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++)
    {  if(str[i]=='1')
        count++;
    }
    if(count%2==0)
    {
        val=(count/2)*(count+1);
    }
    else
    {
        val=count*((count+1)/2);
    }
    cout<<val<<endl;
}
return 0;
}
