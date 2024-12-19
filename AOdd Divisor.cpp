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
        long long int n;
        cin>>n;
        if(n%2 !=0){
            cout<<"YES"<<endl;
        }
        else if((n&(n-1))==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}