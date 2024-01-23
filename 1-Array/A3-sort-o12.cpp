#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

/*
sorting 0 1 2

1.) count app
3.) sorting 
2.) dnf dutch national flag
*/
// using count 
void sort012(int a[], int n){
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)c0++;
        if(a[i]==1)c1++;
        if(a[i]==2)c2++;
    }
    
    int i=0;
    while(c0>0) {
        a[i++]=0;
        c0--;
    }
    while(c1>0) {
        a[i++]=1;
        c1--;
    }
    while(c2>0) {
        a[i++]=2;
        c2--;
    }
}

// sort 
void sort012(int a[], int n){
    sort(a,a+n);
}

// dnf 
