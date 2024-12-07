#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }a[j+1]=temp;
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("echoout.txt", "w", stdout);
#endif
    int a[] = {31,21,43,22,12,9};
    int size = 6;
    insertion_sort(a,size);
    for(int i =0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}