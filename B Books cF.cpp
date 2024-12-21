#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int n,t;
    cin>>n>>t;
    int a[n];
    int i,j=0,count=0,sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum += a[i];
        if(sum<=t){
            count++;
        }else{
            sum = sum - a[j];
            j++;
        }
    }
    cout<<count<<endl;
    return 0;
}