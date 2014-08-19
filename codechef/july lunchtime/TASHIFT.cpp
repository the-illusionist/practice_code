#include<bits/stdc++.h>
using namespace std;

int main()
{std::ios_base::sync_with_stdio(false);
long long n,i,count,j,maxi,pos,q;
cin>>n;
string s1,s2;
cin>>s1;
cin>>s2;
maxi=0;
pos=0;
for(i=0;i<n;i++)
{

   if(s2[i]==s1[0])
   {  count=0;

       for(j=i;j<n;j++)
       {

           if(s2[j]!=s1[j-i])
           {
               break;
           }
           else
           {
               count++;
           }

       }

       if(j==n)
        {
             for(q=0;q<i;q++)
             {
                   if(s2[q]!=s1[n-i+q])
                {
                   break;
               }
               else
               {
                   count++;
               }
            }
        }

       if(maxi<count)
       {
           maxi=count;
           pos=i;
       }
    if(count<n-i)
    {
        i=i+count;
    }
    if(count>=n-i)
    {
        i=n-2;
    }
   }
}

cout<<pos;
return 0;
}
