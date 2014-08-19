#include <iostream>
using namespace std;

int main()
{
int n,i,count;
char a[100];
cin >> n;

while(n--)
{
cin >> a;
count=0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='P'||a[i]=='O'||a[i]=='A'||a[i]=='D'||a[i]=='R'||a[i]=='Q')
count++;
if(a[i]=='B')
count=count+2;
}
cout << count <<endl;
}
return 0;
}
