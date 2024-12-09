#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int n,a,police=0,crime=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
    if(a==-1 & police ==0){
        crime++;
    }else if(a==-1 && police !=0){
        police--;
    }else{
        police+=a;
    }
}
    cout<<crime<<endl;
    return 0;
}