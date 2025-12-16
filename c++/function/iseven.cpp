#include<iostream>
using namespace std;
bool isEven(){
    int n;
    cout<<"Enter number=";
    cin>>n;
    if(n&1) return 0;
    else return 1;
}
int main(){
    if(isEven()){
        cout<<"Number is even";
    }
    else cout<<"Number is odd";
}