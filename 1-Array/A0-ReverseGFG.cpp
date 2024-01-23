#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
1.) Reverse Traversal
2.) Swapping 
3.) Recursive 
4.) Pointer approach
*/

// ---------------- Linear search
void reverseLinear(vector<int> arr){
    int n = arr.size();
    int rev[n] = {0};

    int k = 0;
    for(int i=n-1;i>=0;i--){
        rev[k]=arr[i];
        k++;
    }
    for(int i=0;i<n;i++){
        cout<<rev[i] << " ";
    }
}

// -------------- n/2 swapping 
void reverseSwap(vector<int> arr){
    int n = arr.size();
    int s = 0,e = n-1;

    while(s<=e){
        int t = arr[s];
        arr[s] = arr[e];
        arr[e] = t;

        s++;e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}

// ---------- void recursive
void rev(int arr[],int s,int e){
    if(s>=e) return;

    int temp = arr[e];
    arr[e] = arr[s];
    arr[s] = temp;

    rev(arr,s+1,e-1);
}
void reverseRecursive(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = 6;
    int start = 0;
    int end = n-1;

    rev(arr,start,end);

    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
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


int main(){
    vector<int> v{1,2,4,7,8,45,23};
    
    reverseLinear(v); cout<<endl;
    reverseSwap(v); cout<<endl;
    reverseRecursive(); cout<<endl;
    return 0;
}

