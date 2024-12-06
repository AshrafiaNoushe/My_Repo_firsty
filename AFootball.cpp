#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s;
int i,c=0,x;
cin>>s;
x = s.length();
for(i=0;i<x;i++){
    if(s[i]==s[i+1]){
        c++;
        }
    else{
        c=0;
}
}
if(c >= 7){
    cout<<"YES"<<"\n"<<endl;
}
else cout<<"NO"<<"\n"<<endl;
return(0);
}
