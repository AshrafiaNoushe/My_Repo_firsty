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
        int a,b,c,i;
        cin>>a>>b>>c;
        if(a+b == c || b+c == a || c+a == b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}