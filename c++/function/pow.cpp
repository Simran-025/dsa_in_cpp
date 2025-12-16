#include<iostream>
using namespace std;
int pow(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter value of a and b=";
    cin>>a>>b;
    cout<<"power a,b="<<pow(a,b);
}