#include<bits/stdc++.h>
using namespace std;
void Sub(int ind,int n,int a[],vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=ind;i<n;i++){
        if(i!=ind&&a[i]==a[i-1])continue;
        ds.push_back(a[i]);
        Sub(i+1,n,a,ds,ans);
        ds.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort the array or enter sorted array
    vector<vector<int>>ans;
    vector<int>ds;
    Sub(0,n,a,ds,ans);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}