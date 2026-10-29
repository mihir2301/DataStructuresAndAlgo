#include<bits/stdc++.h>
using namespace std;
int Sub(int i,int n,int k,int sum,int a[],vector<int>v){
    if(i==n){
        if(sum==k)return 1;
        else return 0;
    }
    v.push_back(a[i]);
    sum+=a[i];
    int l=Sub(i+1,n,k,sum,a,v);
    v.pop_back();
    sum-=a[i];
    int r=Sub(i+1,n,k,sum,a,v);
    return l+r;
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
    cout<<Sub(0,n,k,sum,a,v);
}