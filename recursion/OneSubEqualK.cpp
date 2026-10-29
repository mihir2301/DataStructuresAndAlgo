#include<bits/stdc++.h>
using namespace std;
bool Sub(int i,int n,int k,int a[],vector<int>v,int sum){
    if(i==n){
        if(sum==k){
            for(auto p:v)cout<<p<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    v.push_back(a[i]);
    sum+=a[i];
    if(Sub(i+1,n,k,a,v,sum))return true;
    v.pop_back();
    sum-=a[i];
    if(Sub(i+1,n,k,a,v,sum))return true;
    return false;
}
int main(){
    int n,k;
    int a[n];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    vector<int>v;
    bool t=Sub(0,n,k,a,v,sum);
    if(k==false)
    cout<<"No Subsequence present";
}