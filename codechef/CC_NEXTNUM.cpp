#include <iostream>
using namespace std;

long long int fac[18];
void fac()
{
    int i;
    fac[0]=1;
    for(i=1; 1<=18; i++)
    {
        fac[i]=fac[i-1]*i;
    }

}
int main ()
{

}
