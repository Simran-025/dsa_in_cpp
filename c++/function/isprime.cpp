#include <iostream>
using namespace std;
bool is_prime(int n){
    int count=0;
    if(n==1||n==0){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count!=0){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n=";
    cin>>n;
    cout<<is_prime(n);
    return 0;
}