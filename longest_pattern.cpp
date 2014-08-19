#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
int t;
cin>>t;
while(t--)
{   int count=0,i,k;
    char temp;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int m=s1.length(),n=s2.length();
       for(i=0;i<m;i++)
    {
        for(int k=0;k<n;k++)
        {
            if (s1[i]==s2[k])
            {
                count++;
                temp=s2[k];
                s2[k]=s2[n-1];
                s2[n-1]=temp;
                n=n-1;
                break;
            }
        }
    }
    cout<<count<<endl;
}
}
