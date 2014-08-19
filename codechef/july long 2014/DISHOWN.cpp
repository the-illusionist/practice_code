#include <bits/stdc++.h>
using namespace std;

int main()
{std::ios_base::sync_with_stdio(false);
   long t,i,n,q,x,y,z,a,b,c;
   cin>>t;
   while(t--)
   {
       cin>>n;
       long score[n+1];
       long owner[n+1];
       for(i=1;i<n+1;i++)
    {
        cin>>score[i];

        owner[i]=i;

    }
    cin>>q;
    for(i=0;i<q;i++)
    {
       cin>> x;
       if(x==0)
       {
           cin>>y>>z;

                a=y;
               while(y!=owner[y])
               {
                 y=owner[y];
               }
               b=z;
               while(z!=owner[z])
               {
                 z=owner[z];
               }
            owner[a]=y;
            owner[b]=z;


           if(owner[y]==owner[z])
           {
               cout<<"Invalid query!"<<endl;

           }
           else
           {

               if(score[y]>score[z])
               {
                   owner[z]=owner[y];
               }
               else if(score[z]>score[y])
               {
                   owner[y]=owner[z];
               }
           }
       }



       else
       {
           cin>>y;

               while(y!=owner[y])
               {
                 y=owner[y];
               }
           cout<<owner[y]<<endl;
       }
    }
   }

return 0;
}
