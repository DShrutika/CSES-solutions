#include<bits/stdc++.h>
using namespace std;

// int f(int t, int n, vector<int>& arr, vector<int>& memo){
//     if(t==0) return 0;
//     if(t<0) return 1e9;

//     if(memo[t]!=-1) return memo[t];
//     int mini=1e9;
//     for(int i=0;i<n;i++){
//         mini=min(mini,1+f(t-arr[i],n,arr,memo));
//     }

//     return memo[t]=mini;
// }

int main(){
    int n;
    int x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    // vector<int> memo(x+1,-1);
    vector<vector<int>> memo(n+1,vector<int>(x+1,-1));
    for(int i=0;i<=n;i++) memo[i][0]=0;
    for(int t=0;t<=x;t++){
        int mini=1e9;
        for(int i=0;i<n;i++){
            if(t-coins[i]<0) memo[i][t]=-1;
            else{
                mini=min(mini,1+memo[i][t-coins[i]]);
            }
        }
    }
    // int ans=f(x,n,coins,memo);
    // if(ans==1e9) cout<<-1;
    // else cout<<ans;
    cout<<memo[n][x];
    return 0;
}