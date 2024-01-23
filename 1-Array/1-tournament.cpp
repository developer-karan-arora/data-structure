#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

struct mm {int min;int max;};

mm recursiveCall(int v[],int s,int e){
    mm minmax ;
    if(s==e){
        minmax.max=v[s];
        minmax.min=v[s];
        return minmax;
    }
    if(s+1==e){
        minmax.max=max(v[s],v[e]);
        minmax.min=min(v[s],v[e]);
        return minmax; 
    }

    // break
    int mid = (s + e)/2;
    cout << "i" << s << " " << mid << " " << e << endl;
    mm mml = recursiveCall(v,s,mid);
    mm mmr = recursiveCall(v,mid+1,e);

    // combine 
    minmax.max = max(mml.max,mmr.max);
    minmax.min = max(mml.min,mmr.min);
    return minmax;
}

void tournamentMethod(int v[],int n){
    int start = 0;
    int end = n-1;
    int mid = ((start+ end))/2;
    
    mm ans = recursiveCall(v,start,end);
    cout << "min and max are :- " << ans.max << " " << ans.min;
}

int main(){
    int v[7] = {21,8,7,53,9,128,1};
    tournamentMethod(v,7);
    return 0;
}