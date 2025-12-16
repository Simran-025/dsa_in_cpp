#include <iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int factN=fact(n);
    int factR=fact(r);
    int factn_r=fact(n-r);
    return factN/(factR*factn_r);
}
int main(){
    int n,r;
    cout<<"Enter the value of n=";
    cin>>n;
    cout<<"Enter the value of r=";
    cin>>r;
    cout<<ncr(n,r)<<endl;
    return 0;
}