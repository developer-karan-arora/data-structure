#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

// using sorting technique
void minSorting(int arr[],int n,int k){
    sort(arr,arr+n);
    int ans = arr[k-1];
}

// using heap data structure 
int minHeap(int arr[],int n,int k){
    priority_queue<int> mh;

    for(int i=0;i<k;i++) mh.push(arr[i]);
    for(int i=k;i<n;i++) {
        if(arr[i]<mh.top()){
            mh.pop();
            mh.push(arr[i]);
        }
    }

    int ans = mh.top();
    return ans;
}

// using loops 
int minLoop(int arr[],int n,int k){
    int ans = -1;
    for(int i=0;i<k;i++){
        int min = INT_MAX,index=-1;
        for(int i=0;i<n;i++){
            if(arr[i]!=0 && arr[i]<min){
                index = i;
                min=arr[i];
            }
        }
        ans = arr[index];
        arr[index]=0;
    }
}