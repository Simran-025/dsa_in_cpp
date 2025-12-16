#include <iostream>
using namespace std;
int main(){
    int n,num=1;
    cout<<"Enter number=";
    cin>>n;
    for(int i=1;i<=n;i++){ //Row
        for(int j=1;j<=n;j++){  //column
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    cout<<"Character square pattern\n";
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<"Increasing square pattern\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}