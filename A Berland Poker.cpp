#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int e = n/k;
        if(e>=m){
            cout<<m<<endl;
        }
        else{
            int rem = m-e;
            int rem2 = (rem+k-2)/(k-1);
            cout<<e-rem2<<endl;
        }
    }
    return 0;
}