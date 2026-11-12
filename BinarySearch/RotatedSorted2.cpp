#include<bits/stdc++.h>
using namespace std;
bool bs(int low,int high,int t,int a[]){
    if(low>high)return 0;
    int mid=low+(high-low)/2;
    if(a[mid]==t)return 1;
    if(a[mid]==a[low]&&a[high]==a[mid]){
        low=low+1;
        high=high-1;
        return bs(low,high,t,a);
    }
    if(a[low]<=a[mid]){
        if(a[low]<=t&&t<=a[mid]){
            return bs(low,mid-1,t,a);
        }
        else return bs(mid+1,high,t,a);
    }
    else{
        if(a[mid]<=t&&t<=a[high]){
            return bs(mid+1,high,t,a);
        }
    else return bs(low,mid-1,t,a);
    }
}
int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<bs(0,n-1,t,a);
}