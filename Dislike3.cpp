#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,count1=0;
        cin>>n;
        for(int i=0; i<n; ){
            count1++;
            if(count1%3!=0 && count1%10!=3){
                i++;
            }
        }

        cout<<count1<<endl;
    }
    return 0;
}
