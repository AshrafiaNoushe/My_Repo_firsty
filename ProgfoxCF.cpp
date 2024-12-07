#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int a,b,i,j;
    cin>>a>>b;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i%4 == 2){
                if(j==b){
                    cout<<"#";

                }else{
                    cout<<".";
                }

            }else if(i%4==0){
                if(j==1){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}