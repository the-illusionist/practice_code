#include <bits/stdc++.h>
using namespace std;


int arr[9][9];
int i, j,val,k,l,q;
int val_arr[9];
int main()
{

   for(i=0;i<9;i++)
   {
       for(j=0;j<9;j++)
       {
         {
            for(k=0;k<9;k++)
            {
                val_arr[k]=k+1;
            }

            for(k=0;k<i+1;k++)
            {
                 for(l=0;l<9;l++)
                 {
                     if(arr[k][j]==val_arr[l])
                     {
                         val_arr[l]=0;
                     }
                 }
            }

              for(k=0;k<j+1;k++)
              {
                 for(l=0;l<9;l++)
                 {
                     if(arr[i][k]==val_arr[l])
                     {
                          val_arr[l]=0;
                     }
                 }
              }

              int count=0;
              for(k=0;k<9;k++)
              {
                  if(val_arr[k]!=0)
                  {
                      count++;
                  }
              }
              l=0;
              int val_arr2[count];
              for(k=0;k<9;k++)
              {
                  if(val_arr[k]!=0)
                  {
                      val_arr2[l]=val_arr[k];
                      l++;
                  }
              }

              random_shuffle(val_arr2,val_arr2+count);
              val=val_arr2[0];
           }
           arr[i][j]=val;
       }
   }

   for(i=0;i<9;i++)
   {
       for(j=0;j<9;j++)
       {
           cout<<arr[i][j]<<' ';
       }
       cout<<endl;
   }
}
