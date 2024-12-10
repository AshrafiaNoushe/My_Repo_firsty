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
        int a[4];
        int i,count=0;
        for(i=0;i<4;i++){
            cin>>a[i];
        }
        if(a[0]<a[1]){
            count++;
        }
        if(a[0]<a[2]){
            count++;
        }
        if(a[0]<a[3]){
            count++;
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}