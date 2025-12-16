#include <iostream>
using namespace std;
int fib(int n){
    int a=0,b=1;
    cout<<"Fibbonacci series="<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=2;i<n;i++){
        int c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
}
int main(){
    int n;
    cout<<"Enter a no.=";
    cin>>n;
    fib(n);
    return 0;
}