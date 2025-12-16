#include <iostream>
using namespace std;
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers=";
    cin>>a;
    cin>>b;
    cout<<"Minimum of two="<<min(a,b)<<endl;
    return 0;
}