#include<bits/stdc++.h>
using namespace std;
void Sub(int i,int n,int sum,int a[]){
    if(i==n){
        cout<<sum<<" ";
        return;
    }
    
    sum+=a[i];
    Sub(i+1,n,sum,a);
    sum-=a[i];
    Sub(i+1,n,sum,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    Sub(0,n,sum,a);
}