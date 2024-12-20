#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count =1,count2=1;
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count2++;
        }else{
        count = max(count2,count);
        count2 = 1;        }
    }
    count = max(count2,count);
    cout<<count<<endl;
    return 0;
}