#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

/*
move negative 

1.) using 2 loops 
2.) inverse sorting 
3.) swap on +ve take +ve frnt
*/

// using negative index 
void moveNeg(){
    int arr[9] = {0,1,-2,3,-4,5,-6,7,-8};
    int n = 9;

    int negIndex = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            swap(arr[i],arr[negIndex]);
            negIndex++;
        }
    }

    for(auto i:arr)cout << i << " ";
}

// using 2 loops 
void segregateElements(int arr[],int n){
    int copy[n]={0};
    for(int i=0;i<n;i++) copy[i]=arr[i];
    
    int index=0;
    for(int i=0;i<n;i++){
        if(copy[i]>=0) {
            arr[index]=copy[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        if(copy[i]<0) {
            arr[index]=copy[i];
            index++;
        }
    }
}

int main(){
    moveNeg();
    return 0;
}