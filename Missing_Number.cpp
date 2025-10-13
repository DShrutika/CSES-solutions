#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    
    // *********Approach 1**********

    // for(int i=0;i<n-1;i++){
    //     cin>>arr[i];
    // }

    // if(n==2){
    //     if(arr[0]==1) cout<<2;
    //     else cout<<1;
    // }

    // else{
    //     sort(arr.begin(),arr.end());
    //     int printed=0;
    //     for(int i=1;i<n-1;i++){
    //         if(arr[i]-arr[i-1] != 1){
    //             cout<<(arr[i]-1);
    //             printed=1;
    //         }
    //     }

    //     if(printed==0){
    //         if(arr[0]==1)
    //             cout<<n;
    //         else
    //             cout<<1;
    //     }
    // }
    
    // ***********Approach 2************

    long long sum=0;
    long long act_sum=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
        act_sum+=i;
    }
    
    act_sum+=2*n-1;
    cout<<act_sum-sum;
    return 0;
}