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
        int a;
        cin>>a;
        if(a<=1399){
            cout<<"Division 4"<<endl;

        }
        if(a>=1400 && a<=1599){
            cout<<"Division 3"<<endl;

        }
        if(a>=1600 && a<=1899){
            cout<<"Division 2"<<endl;

        }
        if( a>=1900){
            cout<<"Division 1"<<endl;
        }
    }
    return 0;
}