#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputS.txt", "r", stdin);
    freopen("outputS.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        vector<int>shit;
        int a,num;
        cin>>a;
        if(a%10!=0){
        shit.push_back(a%10);
         }
        num = a%10;
        a -=num;
        if(a%100 !=0){
            shit.push_back(a%100);
        }
        num = a%100;
        a-=num;
        if(a%1000!=0){
            shit.push_back(a%1000);

        }
        num = a%1000;
        a-=num;
        if(a%10000 !=0){
            shit.push_back(a%10000);
        }
        if(a>=10000 && a%10000==0){
            shit.push_back(a);
        }
        cout<<shit.size()<<endl;
        for(int i=0;i<shit.size();i++){
            cout<<shit[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}