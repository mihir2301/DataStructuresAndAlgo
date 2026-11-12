#include<bits/stdc++.h>
using namespace std;
int bs(int low,int high,int &ans,int a[],int &ind){
    if(low>high) return ind;
    int mid=low+(high-low)/2;
    int b=ans;
    if(a[low]<=a[mid]){
        ans=min(ans,a[low]);
        if(ans!=b)ind=low;
        return bs(mid+1,high,ans,a,ind);
    }
    ans=min(ans,a[mid]);
    if(ans!=b)ind=mid;
    return bs(low,mid-1,ans,a,ind);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=INT_MAX;
    int ind=0;
    cout<<bs(0,n-1,ans,a,ind);
}