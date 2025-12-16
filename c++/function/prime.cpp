#include <iostream>
using namespace std;
bool isprime(int n){
    if(n==1) return 1;
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int num=isprime(n);
    if(num==1){
        cout<<"yes Prime number";
    }else{
        cout<<"Not prime";
    }
}  