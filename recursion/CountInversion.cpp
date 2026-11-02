#include<bits/stdc++.h>
using namespace std;
int merge(int low,int mid,int high,int a[]){
    vector<int>ans;
    int l=low;
    int h=mid+1;
    int c=0;
    while(l<=mid && h<=high){
        if(a[l]<=a[h]){
            ans.push_back(a[l]);
            l++;
        }
        else{
            c+=mid-l+1;
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
    return c;
}
int merges(int low,int high , int a[]){
    if(low==high)return 0;
    int mid=(low+high)/2;
    int count=0;
    count+=merges(low,mid,a);
    count+=merges(mid+1,high,a);
    count+=merge(low,mid,high,a);
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<merges(0,n-1,a);
}