#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{   int count=0,i;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int a[256]={0},b[256]={0};
    for(i=0;i<s1.length();i++)
    {
        a[int(s1[i])]++;
    }
    for(i=0;i<s2.length();i++)
    {
        b[int(s2[i])]++;
    }
    for(i=0;i<256;i++)
    {
        count=count+min(a[i],b[i]);
    }
cout<<count<<endl;
}
}
