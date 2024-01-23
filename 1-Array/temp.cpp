#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void doUnion(int a[], int n, int b[], int m)  {
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++){
        mp[b[i]]++;
    }

    vector<int> v;
    for (auto it = mp.begin(); it != mp.end(); it++) {
        v.push_back(it->first);
    }
    for(auto i:v)cout << i << " ";
}


int main(){
    int a[] = {1,2,5,87,42,34};
    int b[] = {1,2,41,53,87};
    doUnion(a,6,b,5);
    return 0;
}