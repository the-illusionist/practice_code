#include<bits/stdc++.h>
using namespace std;

//--------------------------------------INITIALISING FUNCTIONS----------------------------------
void permute();

//-------------------------------------INITIALISING VARIABLES-----------------------------------
int a[100], n=1, c=0, b, k=0, l;

//---------------------------------------------MAIN---------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout<<"A Program to generate all the PERMUTATIONS on a given set S ={1, 2, . . . , N}"<<endl<<endl;
    do{
    cout<<"Please Enter Value of N: ";
    cin>>n;
    if(n<1)
    {
        cout<<"Invalid input, Please Input Again"<<endl;
        continue;
    }
    break;
    }while(1);
    for(int i=0;i<n;i++)
    {
        a[i] = i+1;                                                      //STORING 1 TO N IN ARRAY
    }

    cout<<endl<<"The permutations are: "<<endl;
    permute();                                                           //PERMUTATION FUNCTION CALL

    cout<<"\nTotal Permutations: "<<c<<endl;

    return 0;
}

//----------------------------------MAIN ENDS, PERMUTE FUNCTION BELOW------------------------------------

void permute()
{
    while(k>=0)
    {
    c++;
    cout<<'(';
    for(int i=0;i<n;i++)
    {
        cout<<a[i];                                                 //PRINTING NUMBERS ONE BY ONE
        if(i<n-1)
         {
             cout<<',';
         }

    }
    cout<<')'<<endl;

    k=n-2;
    while(a[k]>=a[k+1] && k>=0)
    {
            k--;
    }

    if(k==-1)
    {
    break;
    }

    l=n-1;
    while(a[k]>=a[l] && l>=0)
    {
        l--;
    }
    swap(a[k], a[l]);
    reverse(a+k+1, a+n);}
}
