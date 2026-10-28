#include<bits/stdc++.h>
using namespace std;
void swapping(int i,int n,int a[]){
    if(i>=n/2)
    return;
    swap(a[i],a[n-i-1]);
    swapping(i+1,n,a);
}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int a[n];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    cin>>a[i];
    swapping(0,n,a);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}