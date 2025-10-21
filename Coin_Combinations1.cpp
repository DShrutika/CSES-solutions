#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

int main(){
    int n;
    int x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<long long> memo(x+1,0);
    memo[0]=1;
    for(int t=1;t<=x;t++){
        long long ways=0;
        for(int i=0;i<n;i++){
            if(t-arr[i]>=0)
                ways+=memo[t-arr[i]];
        }

        memo[t]=ways%mod;
    }
    cout<<memo[x];
    return 0;
}