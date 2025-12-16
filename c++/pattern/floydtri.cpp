#include <iostream>
using namespace std;
int main(){
    int n,num=1,num1=1;
    cout<<"Enter a number=";
    cin>>n;
    cout<<"Floyd's triangle=\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<"Another inverse triangle=\n";
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<num1<<" ";
        }
        num1++;
        cout<<endl;
    }
    return 0;
}