#include<bits/stdc++.h>
using namespace std;
void Sub(int i,int n,int k,int a[],vector<int>v,int sum){
    if(i==n){
        if(sum==k){
            for(auto p:v)cout<<p<<" ";
            cout<<endl;
        }
        return ;
    }
    v.push_back(a[i]);
    sum+=a[i];
    Sub(i+1,n,k,a,v,sum);
    v.pop_back();
    sum-=a[i];
    Sub(i+1,n,k,a,v,sum);
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
    Sub(0,n,k,a,v,sum);
}