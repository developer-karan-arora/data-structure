#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5,6};
  int len = sizeof(arr)/sizeof(arr[0]);
  int s=0,e=len-1;
  while(s<e){
    int t=arr[s];
    arr[s]=arr[e];
    arr[e]=t;
    s++;e--;
  }

  for(int i=0;i<len;i++){
    cout<<arr[i];
  }
  return 0;
}

// alternative approach
int* reverse(int arr[],int n){
  int copy[n]={0};
  for(int i=0;i<n;i++){
    copy[i]=arr[i];
  }

  for(int i=n-1,j=0;i>=0;i--,j++){
    arr[j]=copy[i];
  }
  return arr;
}