#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{  int n=1;
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   do
   {
      cout<<n<<s<<endl;
      n=n+1;

   }while(next_permutation(s.begin(),s.end()));
}
