#include <bits/stdc++.h>
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    long n,t;
    cin >> t;
    while (t--)
    {   cin >> n;

        if (n==0 || n==1 || n==2 || n==3 || n==5 || n==8 || n==13 || n==21 || n==34 || n==55 || n==89 || n==144 || n==233 || n==377 || n==610 || n==987 ||
            n==1597 || n==2584 || n==4181 || n==6765 || n==6765 || n==17711 || n==28657 || n==46368  || n==75025  || n==121393  || n==196418  || n==317811  || n==514229 || n==832040  || n==1346269  || n==2178309  ||
            n==3524578  || n==5702887  || n==9227465  || n==14930352  || n==24157817  || n==39088169  || n==63245986  || n==102334155  || n==165580141  || n==267914296  || n==433494437 || n==701408733 || n==10946 ||
             n==1134903170|| n==1836311903 || n==2971215073 || n==4807526976   || n==7778742049
            )
        {
            cout << "IsFibo" <<endl;
        }
        else
        {
            cout << "IsNotFibo" <<endl;
        }
    }

    return(0);
}
