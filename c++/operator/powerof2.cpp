#include <iostream>
using namespace std;
int main(){
    int n,r,count=0;
    cout<<"Enter a number=";
    cin>>n;
    if(n<=0){
        cout<<"not power";
        return 0;
    }
    while(n>1){
        if(n%2!=0){
            cout<<"not power";
            return 0;
        }
        count++;
        n=n/2;
    }
    cout<<"power of 2="<<count<<endl;
    return 0;
}