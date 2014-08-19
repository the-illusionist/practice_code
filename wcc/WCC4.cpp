#include <iostream>
using namespace std;
//for counting number of ways in which n rupees can be distributed into coins of 1, 3 and 4
int main ()
{
    int n, i=1,count=1;
    cin >> n;
    while(i<n+1)
 {
     if(i%3==0 || i%4==0 || i%7==0)
    {count++;}
    i++;
 }
  cout << count;
  return 0;
}
