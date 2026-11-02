#include<bits/stdc++.h>
using namespace std;
void merge(int low,int mid,int high,int a[]){
    vector<int>ans;
    int l=low;
    int h=mid+1;
    while(l<=mid && h<=high){
        if(a[l]<=a[h]){
            ans.push_back(a[l]);
            l++;
        }
        else{
            ans.push_back(a[h]);
            h++;
        }
    }
    while(l<=mid){
        ans.push_back(a[l]);
        l++;
    }
    while(h<=high){
        ans.push_back(a[h]);
        h++;
    }
    for(int i=low;i<=high;i++){
        a[i]=ans[i-low];
    }
}
void merges(int low,int high,int a[]){
    if(low == high)return;
    int mid=(low+high)/2;
    merges(low,mid,a);
    merges(mid+1,high,a);
    merge(low,mid,high,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merges(0,n-1,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}