#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,a=0,d=0;
    string s;
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }else if(s[i]=='D'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }else if(a<d){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
