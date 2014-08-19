#include <bits/stdc++.h>
using namespace std;

string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    return buf;
}

int main() {
    string s=currentDateTime(),s1;
    s1=s[s.length()-1];
    int k = atoi(s1.c_str())%6+1;
    cout <<k<<endl;
    getchar();
}
