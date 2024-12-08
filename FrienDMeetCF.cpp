#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputS.txt", "r", stdin);
    freopen("outputS.txt", "w", stdout);
#endif
    int a ,b,c,ans =0;
    cin>>a>>b>>c;
    ans = max({a,b,c})-min({a,b,c});
    cout<<ans<<endl;
    return 0;
}