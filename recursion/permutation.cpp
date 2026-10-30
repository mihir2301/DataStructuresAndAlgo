#include<bits/stdc++.h>
using namespace std;
void Permut(int ind,int n,vector<int>&a,vector<vector<int>>&ans){
    if(ind==n){
        ans.push_back(a);
        return;
    }
    for(int i=ind;i<n;i++){
        swap(a[ind],a[i]);
        Permut(ind+1,n,a,ans);
        swap(a[ind],a[i]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
    }
    vector<vector<int>>ans;
    Permut(0,n,a,ans);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}