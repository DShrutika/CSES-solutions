#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long k=n;
    vector<long long> ans;
    ans.push_back(k);
    while(k!=1){
        if(k%2==0){
            k=k/2;
        }

        else{
            k=k*3+1;
        }

        ans.push_back(k);
    }

    int m=ans.size();
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}