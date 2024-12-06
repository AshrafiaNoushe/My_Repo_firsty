#include <bits/stdc++.h>
using namespace std;
    int binarySearch(int a[],int data,int size){
        int l,r,mid;
        l=0;
        r=size-1;
        while(l<=r){
            mid = (l+r)/2;
            if(data==a[mid]){
                return mid;
            }else if(data>a[mid]){
                l=mid+1;
            }else if(data<a[mid]){
                r=mid-1;
            }
        }return -1;
    }
int main() {
    #ifndef ONLINE_JUDGE
    freopen("inputS.txt", "r",stdin);
    freopen("outputS.txt","w",stdout);
#endif
    int a[10]={10,12,23,27,28,29,31,35,36,37};
    int s=10;
    int data = 31;
    int index = binarySearch(a,data,s);
    cout<<"Data index is: "<<index<<endl;
    return 0;
}