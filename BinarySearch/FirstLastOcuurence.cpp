#include<bits/stdc++.h>
using namespace std;
int bs(int low,int high,int t,int a[],int first){
    if(low>high){
        return first;
    }
    int mid=low+(high-low)/2;
    if(a[mid]>=t){
        first=min(first,mid);
        return bs(low,mid-1,t,a,first);
    }
    return bs(mid+1,high,t,a,first);
}
int bs2(int low,int high,int t,int a[],int last){
    if(low>high){
        return last;
    }
    int mid=low+(high-low)/2;
    if(a[mid]>t){
        last=min(last,mid);
        return bs2(low,mid-1,t,a,last);
    }
    return bs2(mid+1,high,t,a,last);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int t;
    cin>> t;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int first=n;
    int last=n;
    first=bs(0,n-1,t,a,first);
    last=bs2(0,n-1,t,a,last);
    if(first==n||a[first]!=t){
    cout<<"Element not present";
    return 0;
    }
    cout<<"First Occurence"<<first<<endl;
    cout<<"Second Occurence"<<last-1;
}