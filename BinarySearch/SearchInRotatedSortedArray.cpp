#include<bits/stdc++.h>
using namespace std;
bool bs(int low,int high,int t,int a[]){
    if(low>high){
        return 0;
    }
    int mid=low+(high-low)/2;
    if(a[mid]==t)return 1;
    if(a[mid]>=a[low]){
    if(t>=a[low] && a[mid]>=t){
        return bs(low,mid-1,t,a);
    }
        return bs(mid+1,high,t,a);
    }
    else{
        if(t<=a[high]&& t>=a[mid]){
            return bs(mid+1,high,t,a);
        }
        return bs(low,mid-1,t,a);
    }
    
}
int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool k=bs(0,n-1,t,a);
    if(k==0){
         cout<<"Element not present";
         return 0;
    }
   
    cout<<"Element present";
}