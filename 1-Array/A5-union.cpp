#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
/*
union of 2 arrays

1.) bruteforce 
2.) hashmap
3.) set structure

Intersection
1.) bruteforce 
2.) hashmap
3.) detect by array
*/

// ----------------------
// using bruteforce
int myUnion(int large[],int n,int small[],int m){
    vector<int> v;
    for(int i=0;i<n;i++) v.push_back(large[i]);
    
    for(int t=0;t<m;t++){
        bool isExist = false;
        for(int i=0;i<m;i++){
            if(large[i]==small[t]){
                isExist = true;
            }
        }
        
        if(isExist==false) v.push_back(small[t]);
    }
    
    for(auto i:v)cout << i << " ";
    return v.size();
}

void doUnion(int a[], int n, int b[], int m)  {
    int ans;
    if(n>=m){
        ans = myUnion(a,n,b,m);
    } else{
        ans = myUnion(b,m,a,n);
    }
}

//---------------------
// using set datastructure
int doUnionSet(int a[], int n, int b[], int m)  {
    set<int> st;
    
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        st.insert(b[i]);
    }
    
    return st.size();
}

// using hashmap 
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