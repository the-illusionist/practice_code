#include <iostream>
using namespace std;

int main ()
{
 int n, i;
 cin >> n;
 int arr[n+1];
 for (i=1; i<n+1; i++)
 {
     arr[i]=-1;
 }
 i=3;
 arr[1]=0; arr[2]=1;
 while(i<n+1)
  {
      if (arr[i]!=-1)
      return arr[n];
      arr[i]= arr[i-1]+arr[i-2];
      i++;
  }
cout << arr[n];
  return 0;
}
