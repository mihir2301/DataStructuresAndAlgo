#include<bits/stdc++.h>
using namespace std;
bool checkpal(int i,int n,int a[]){
    if(i>=n/2)return true;
    if(a[i]!=a[n-i-1])return false;
    return checkpal(i+1,n,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool k=checkpal(0,n,a);
    cout<<k;
}
