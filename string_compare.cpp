#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,temp;
    string s1="AMITABH BACHCHAN", s2="RAJNIKANTH";
    for(i=0;i<s1.length();i++)
    {
        for(j=0;j<i;j++)
        {
            if(s1[i]==s1[j])
            {
                temp=0;
                break;
            }
         }
        if(temp==0)
        {
            temp= 1;
            continue;
        }
        for(k=0;k<s2.length();k++)
        {
            if(s1[i]==s2[k])
            {
                cout<<s1[i]<<" ";
                 break;
            }
        }
    }
    return 0;
}
