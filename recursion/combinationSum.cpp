#include<bits/stdc++.h>
using namespace std;
void Sub(int i,int n,int k,int a[],vector<vector<int>>&ans,vector<int>&ds){
    if(i==n){
        if(k==0){
            ans.push_back(ds);
            return;
        }
        return;
    }
    if(a[i]<=k)
    {ds.push_back((a[i]));
    k-=a[i];
    Sub(i,n,k,a,ans,ds);
    ds.pop_back();
    k+=a[i];
    }
    
    Sub(i+1,n,k,a,ans,ds);
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>>ans;
    vector<int>ds;
    Sub(0,n,k,a,ans,ds);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}