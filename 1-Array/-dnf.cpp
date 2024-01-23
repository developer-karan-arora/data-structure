#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void dnf(){
    int arr[9] = {0,2,1,2,0,1,0,2,0};
    int n = 9;

    int low=0,mid=0,high=n-1;
    while(mid<high){
        if(arr[mid]==1) mid++;
        if(arr[mid]==2) {
            swap(arr[mid],arr[high]);
            high--;
        }
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
    }

    for(auto i:arr) cout << i << " ";
}

int main(){
    dnf();
    return 0;
}
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0