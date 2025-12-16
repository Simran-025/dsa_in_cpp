#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n=";
    cin>>n;
    int i=1;
    for( ; ; ){
        if(n>0){
            cout<<i<<endl;
            i++;
            n--;
        }
        else{
            break;
        }
    }
    for(int a=0,b=1;a>=0 && b>=1 ; a--,b--){
        cout<<a<<" "<<b<<endl;
    }
}