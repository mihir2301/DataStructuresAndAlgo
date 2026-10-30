#include<bits/stdc++.h>
using namespace std;
void Nqueen(int col,int n,vector<string>&board,vector<int>&left,vector<int>&upper,vector<int>&lower,vector<vector<string>>&ans){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int i=0;i<n;i++){
        if(left[i]==1||upper[n-1+(col-i)]==1||lower[i+col]==1)continue;
        else{
            left[i]=1;
            upper[n-1+(col-i)]=1;
            lower[i+col]=1;
            board[i][col]='Q';
            Nqueen(col+1,n,board,left,upper,lower,ans);
            left[i]=0;
            upper[n-1+(col-i)]=0;
            lower[i+col]=0;
            board[i][col]='.';
        }
    }
}
int main(){
    int n;
    cin>>n;
     vector<string>board(n);
     vector<int>left(n,0);
     vector<int>upper(2*n-1,0);
     vector<int>lower(2*n-1,0);
     string s(n,'.');
     for(int i=0;i<n;i++){
        board[i]=s;
     }
     vector<vector<string>>ans;
     Nqueen(0,n,board,left,upper,lower,ans);
     for(auto i:ans){
        for(auto j:i){
            cout<<j<<endl;
        }
        cout<<endl<<"NEXT";
     }              
}
