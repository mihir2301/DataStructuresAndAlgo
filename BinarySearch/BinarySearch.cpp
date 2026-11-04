#include<bits/stdc++.h>
using namespace std;
bool bs(int low,int high,int t,int a[]){
    if(low>high)return 0;
    int mid=low+(high-low)/2;
    if(t==a[mid])return 1;
    else if(t>a[mid]){
        return bs(mid+1,high,t,a);
    }
    return bs(low,mid-1,t,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    cout<<bs(0,n-1,target,a);
}