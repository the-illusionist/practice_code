#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i;
    cin>>t;

    while(t--)
    {
        cin>>n;
        char c[n],p[n];
        for(i=0;i<n;i++)
        {
           cin>>c[i]>>p[i];
        }
        string s;
        cin>>s;
        long long j,l;
        l=s.length();
        int check[l];
        for(i=0;i<l;i++)
        {
            check[i]=0;
        }
        for(i=0;i<n;i++)
        {
            for (j=0;j<l;j++)
            {
                if(s[j]==c[i] && check[j]==0)
                {
                    s[j]=p[i];
                    check[j]=1;
                }
            }
        }
        long long flag=-1, flag1, flag2, flag3=-5;
        for(j=0;j<l;j++)
        {
           if (s[j]=='.')
           {
               flag=j;
               break;
           }
        }

        for(j=flag;j<l;j++)
        {
            if(s[j]!='0')
            {
                flag1=j;
            }
        }
        for(j=flag;j>=0;j--)
        {
            if(s[j]!='0')
            {
                flag2=j;
            }
        }
        if(flag==flag1 && flag!=flag2)
        {
            flag1=flag-1;
        }
        if(flag==flag1 && flag==flag2)
        {
            flag=-2;
        }
        if(flag==-1)
        {
            for(i=0;i<l;i++)
            {
                if(s[i]!='0')
                {
                    flag3=i;
                    break;
                }
            }
        if(flag3==-5)
        {
            cout<<"0";
        }
        else
        {
             for(j=flag3;j<l;j++)
        {
            cout<<s[j];
        }
        }

        }
        else if(flag==-2)
        {
            cout<<"0";
        }
        else
        {
          for(j=flag2;j<=flag1;j++)
        {
            cout<<s[j];
        }
        }

        cout<<endl;
    }
    return 0;
}
