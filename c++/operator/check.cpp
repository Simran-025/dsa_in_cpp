#include <iostream>
using namespace std;
int main(){
    cout<<"Enter your choice:";
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lower case"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Upper case"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"digit"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}