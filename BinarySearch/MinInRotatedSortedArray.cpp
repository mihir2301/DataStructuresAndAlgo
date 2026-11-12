#include<bits/stdc++.h>
using namespace std;
int bs(int low,int high,int a[],int &ans){
    if(low>high){
        return ans;
    }
    int mid=low+(high-low)/2;
    if(a[low]<=a[mid]){
        ans=min(ans,a[low]);
        return bs(mid+1,high,a,ans);
    }
    ans=min(ans,a[mid]);
    return bs(low,mid-1,a,ans);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=INT_MAX;
    cout<<bs(0,n-1,a,ans);
}