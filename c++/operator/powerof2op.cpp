#include  <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no.=";
    cin>>n;
    int right_sh;
    for(int i=1;i<n;i++){
        if(n & 1){
            cout<<"not power of 2"<<i<<endl;
            return 0;
        }
        n>>=1;
    }
    cout<<"power of 2"<<endl;
    return 0;
}