#include<bits/stdc++.h>
using namespace std;
void Sub(int i,int n,int a[],vector<int> v){
    if(i==n){
        for(auto p:v)cout<<p<<" ";
        cout<<endl;
        return;
    }
    v.push_back(a[i]);
    Sub(i+1,n,a,v);
    v.pop_back();
    Sub(i+1,n,a,v);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    Sub(0,n,a,v);
}