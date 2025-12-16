#include <iostream>
using namespace std;
int dec_toBin(int n){
    int bin=0,pow=1;
    while(n>0){
        int r=n%2;
        n=n/2;
        bin += r*pow;
        pow=pow*10;
    }
    return bin;
}
int bin_toDec(int n){
    int dec=0,pow=1;
    while(n>0){
        int r=n%10;
        n=n/10;
        dec += r*pow;
        pow *=2;
    }
    return dec;
}
int main(){
    int n;
    cout<<"Enter a decimal number=";
    cin>>n;
    cout<<dec_toBin(n)<<endl;
    int m;
    cout<<"Enter a binary no.=";
    cin>>m;
    cout<<bin_toDec(m)<<endl;
    return 0;
}