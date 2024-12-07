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
        long long int n,count=0;
        cin>>n;
        count = (n-1)/2;
        cout<<count<<endl;
    }
    return 0;
}