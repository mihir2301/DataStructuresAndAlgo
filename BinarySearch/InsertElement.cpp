#include<bits/stdc++.h>
using namespace std;
int bs(int low,int high,int t,int ans,int a[]){
    if(low>high)return ans;
    int mid=low+(high-low)/2;
    if(a[mid]>=t){
        ans=min(ans,mid);
        return bs(low,mid-1,t,ans,a);
    }
    return bs(mid+1,high,t,ans,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=n;
    int t;
    cin>>t;
    cout<<bs(0,n-1,t,ans,a);
}