#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number=";
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum += i;
            cout<<i<<endl;
        }
    }
    cout<<"Sum is:"<<sum<<endl;
}