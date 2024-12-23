#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    int i,a,b;
    bool check = false;
    for(i=0;i<n;i++){
        cin>>a>>b;
        if(a<b){
            check = true;
        }
    }
    if(check){
        cout<<"Happy Alex"<<endl;
    } else{
        cout<<"Poor Alex"<<endl;
    }   return 0;
}