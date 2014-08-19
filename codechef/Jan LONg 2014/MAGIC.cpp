#include <bits/stdc++.h>
using namespace std;

int main()
{
int T, N,i,k,l,m,p,q,r;
unsigned long long A, B, C,temp;
unsigned long long L[1000];
string S;

   cin >> T;
   while (T--)
{
   cin >> N;
   i=1;
   while (i<=N)
   {
       cin >> L[i];
       i++;
   }
   cin >> A >>B>>C;
   cin>> S;
for(i=0; i<S.length(); i++)
{
    L[i]=L[i]%C;
}
   for(i=0; i<S.length(); i++)
   {
       if (S[i]=='R')
        {    p=i+1;
            for (l=1;l<=N-i; l++)
            {
              temp= L[p] ;
              L[p]=L[N-l+1];
              L[N-l+1]=temp;
              p++;
            }
        }
       else if (S[i]=='A')
       {    q=i+1;
           for (k=1; k<=N-i; k++)
           {
               L[q]=(L[q]+A)%C;
               q++;
           }
       }
      else if (S[i]=='M')
      {   r=i+1;
          for (m=1; m<=N-i; m++)
           {
               L[r]=((L[r]%C)*(B%C))%C;
               r++;
           }
      }

   }
   i=1;
   while (i<=N)
   {
       cout<<L[i]<< " ";
       i++;
   }
   cout<<endl;
}
    return(0);
}
