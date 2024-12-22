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
        int a,b,c,maxy=0,sum1=0,sum2=0,sum3=0;
        cin>>a>>b>>c;
        maxy = max({a,b,c});
        if((a==maxy && b==maxy) || (b==maxy && c==maxy) || (c==maxy&& a==maxy)){
        if(a<=maxy){
            sum1 = (maxy+1)-a;
        }
        if(b<=maxy){
            sum2 = (maxy+1)-b;
        }
        if(c<=maxy){
            sum3 = (maxy+1)-c;
        }
    }else{
        if(a<maxy){
            sum1 = (maxy+1)-a;
        }
        if(b<maxy){
            sum2 = (maxy+1)-b;
        }
        if(c<maxy){
            sum3 = (maxy+1)-c;
        } 
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<endl;
}
return 0;
}