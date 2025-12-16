#include<iostream>
using namespace std;
int fact(int n){
    int fact=1,i=i;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"factorial="<<fact(n)<<endl;
    return 0;
}