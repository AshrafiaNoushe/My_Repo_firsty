#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int  n, k, l, c, d, p, nl, np,s1=0,s2=0,s3=0,s4=0,toast=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    s1 = (k*l)/nl;
    s2 = (c*d);
    s3 = p/np;
    s4 = min({s1,s2,s3});
    toast = s4/n;
    cout<<toast<<endl;
    return 0;
}