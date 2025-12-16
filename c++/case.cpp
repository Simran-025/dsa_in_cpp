#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character/digit=";
    cin>>ch;
    if(ch>='a' && ch<='z' ){
        cout<<"character is in lowercase\t"<<ch<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"character is in uppercase\t"<<ch<<endl;
    }
    else if(ch>='1' && ch<='9'){
        cout<<"Character is digit\t"<<ch<<endl;
    }
    else{
        cout<<"Invalid\n";
    }
    return 0;
}