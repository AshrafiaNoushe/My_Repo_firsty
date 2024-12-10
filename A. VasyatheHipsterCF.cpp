#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int a,b,count1=0,x,y;
    cin>>a>>b;
    x = min(a,b);
    y = abs(a-b);
    count1 = y/2;
    cout<<x<<" "<<count1<<endl;
    return 0;
}
