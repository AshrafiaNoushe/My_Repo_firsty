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
        char ch;
        bool check = false;
        cin>>ch;
        if(ch == 'c' || ch=='o' || ch=='d' || ch=='e' || ch=='f' || ch=='r'||ch=='s'){
            check = true;
        }
        if(check){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}