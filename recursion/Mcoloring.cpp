#include<bits/stdc++.h>
using namespace std;
bool safecolor(int ind,int n,int i,vector<int>&color,vector<vector<int>>&adj){
    for(int in=0;in<n;in++){
        if(in!=ind && adj[ind][in]==1 && color[in]==i)return false;
    }
    return true;
}
bool Mcolor(int ind,int n,int k,vector<int>&color,vector<vector<int>>&adj){
    if(ind==n){
        return true;
    }
    for(int i=1;i<=k;i++){
        if(safecolor(ind,n,i,color,adj)){
            color[ind]=i;
            if(Mcolor(ind+1,n,k,color,adj)==true)return true;
            color[ind]=0;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter no. of nodes";
    cin>>n;
    int m,k;
    cout<<"Enter no. of edges";
    cin>>m;
    cout<<"COLOR";
    cin>>k;
   vector<vector<int>> adj(n, vector<int>(n, 0));
    for(int i=0;i<m;i++){
        int t,p;
        cin>>t>>p;
        adj[t][p]=1;
        adj[p][t]=1;
    }
    vector<int>color(n,0);
    cout<<Mcolor(0,n,k,color,adj);
}