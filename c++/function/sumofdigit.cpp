#include <iostream>
using namespace std;
int sum_of_digit(int n){
    int sum=0;
    while(n>0){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"sum of digit="<<sum_of_digit(n)<<endl;
    return 0;
}