#include <iostream>
#include <math.h>
using namespace std; 
int main(){
    int n;
    cout<<"Enter a decimal number:";
    cin>>n;
    int bin=0;
    int i=0;
    while(n != 0){
        int bit=n&1;
        int p=pow(10,i);
        bin = (bit * p) + bin;
        n=n>>1;
        i++;
    }
    cout<<bin;
}