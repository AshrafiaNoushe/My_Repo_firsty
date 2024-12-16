#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    string s;
    cin>>s;
    int i,c1=0,c2=0,c3=0;
    bool check = false;
    int x = s.size();
    for(i=0;i<x;i++){
        if(isdigit(s[i])){
            c1++;
        }
        if(islower(s[i])){
            c2++;
        }
        if(isupper(s[i])){
            c3++;
        }
    }
    if(x>=5){
        if(c1 !=0 && c2!=0 && c3!=0){
            check = true;
        }
    }
    if(check){
        cout<<"Correct"<<endl;
    }else{
        cout<<"Too weak"<<endl;
    }
return 0;
}
