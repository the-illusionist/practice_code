#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int i,count=0;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    cout << count;
    return(0);
}
