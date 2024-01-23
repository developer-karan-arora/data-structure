#include <bits/stdc++.h>
using namespace std;
/*
minimum and maximum

1.) Linear search
2.) Sorting Technique
3.) Comparing In Pairs
4.) Tournament Method 
*/

// ------- Linear search 
void minmaxLinear(int arr[],int n){
    int mx = INT_MIN, mn = INT_MAX;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    } 

    cout << "max :- " << mx << endl;
    cout << "min :- " << mn << endl;
}

// ------ sorting technique
void minmaxSort(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++) temp[i]=arr[i];

    sort(temp,temp+n);
    cout << "max :- " << temp[n-1] << endl;
    cout << "min :- " << temp[0] << endl;
}

// ---------- comparing pairs 
void minmaxPair(int arr[],int n){
    int Min,Max;
    int i=0;
    if(n%2==0){
        Max=max(arr[0],arr[1]);
        Min=min(arr[0],arr[1]);
        i=2;
    } else {
        Min = arr[0];
        Max = arr[0];
        i=1;
    }

    while(i<n-1){
        if(arr[i]<arr[i+1]){
            Min = min(Min,arr[i]);
            Max = max(Max,arr[i+1]);
        }
        if(arr[i]>arr[i+1]){
            Min = min(Min,arr[i+1]);
            Max = max(Max,arr[i]);
        }
        i+=2;
    }
    
    cout << "min Pair:- " << Min << endl;
    cout << "max Pair:- " << Max << endl;


}

int main(){

    int arr[] = {1, 207, 3, 41, 53, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    minmaxLinear(arr,n);
    minmaxSort(arr,n);
    minmaxPair(arr,n);
    
    return 0;
}