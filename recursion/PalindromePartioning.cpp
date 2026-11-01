#include<bits/stdc++.h>
using namespace std;
bool isPal(string s,int ind,int i){
    while(ind<=i){
        if(s[ind]!=s[i])return false;
        ind++;
        i--;
    }
    return true;
}
void pal(int ind,int n,string s,vector<string>&v,vector<vector<string>>&ans){
    if(ind==n){
        ans.push_back(v);
        return;
    }
    for(int i=ind;i<n;i++){
        if(isPal(s,ind,i)){
            v.push_back(s.substr(ind,i-ind+1));
            pal(i+1,n,s,v,ans);
            v.pop_back();
        }
    }
}
int main(){
    string s;
    cin>>s;
    vector<string>v;
    vector<vector<string>>ans;
    pal(0,s.size(),s,v,ans);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}