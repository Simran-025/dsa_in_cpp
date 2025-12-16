#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    if(n==0 || n==1) return 1;
    int fact_n=n*fact(n-1);
    return fact_n;
}
int ncr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    return num/deno;
}
int main(){
    int n,r;
    cout<<"Enter value of n and r=";
    cin>>n>>r;
    int ans=ncr(n,r);
    cout<<ans;
}