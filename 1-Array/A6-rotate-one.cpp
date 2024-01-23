#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
/*
// rotate 1 time using temp
// reverse 3 time
// using reminder
*/
void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;end--;
    }
}
void rotate(int arr[], int n){
    reverse(arr,0,n-1);
    reverse(arr,1,n-1);
}