#include <bits/stdc++.h>
using namespace std;

int main()
{   long long t,i,j,k,count;
    cin>>t;
    while(t--)
    {   string s1,s2;
        cin>>s1;
        cin>>s2;
        long long l1=s1.length();
        long long a[l1];
        count=0;
        int x=0;
        k=0;
        for(i=0;i<l1;i++)
        {
          for(j=0;j<s2.length();j++)
          {
              if(s1[i]==s2[j])
              {
                  count++;
                  s2[j]='A';
                  a[k]=j;
                  k++;
                  break;
              }
          }
        }
        if(count==l1)
        {
            sort (a,a+l1);
            for(i=0;i<l1;i++)
            {
                cout<<a[i];
            }
            for(i=0;i<l1-1;i++)
            {
                if(a[i+1]-a[i]!=1)
                {
                    x=1;
                    break;
                }
            }
        }
        else
            {
                x=1;
            }
        if(x==1)
        {
            cout<<'N'<<'O'<<endl;
        }
        else
        {
            cout<<'Y'<<'E'<<'S'<<endl;
        }
    }
    return 0;
}
