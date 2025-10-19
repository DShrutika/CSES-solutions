#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

long long f(int t, vector<long long>& ways){
    if(t==0) return 1;
    if(t<0) return 0;

    if(ways[t]!=0) return ways[t];
    long long w=0;
    for(int i=1;i<=6;i++){
        if(t-i<0) break;
        w+=f(t-i,ways);
    }
    return ways[t]=w;
}

int main(){
    int n;
    cin>>n;
    vector<long long> ways(n+1,0);
    cout<<f(n,ways)%mod;
    return 0;
}