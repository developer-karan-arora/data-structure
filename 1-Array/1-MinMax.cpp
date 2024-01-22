#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int mx = INT_MIN, mn = INT_MAX;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    } 

    cout << "max" << mx;
    cout << "min" << mn;
    return 0;
}