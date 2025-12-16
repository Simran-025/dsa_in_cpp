#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number=";
    cin>>num;
    int fact=1,i=1;
    while(num>0){
        fact*=i;
        i++;
        num--;
    }
    cout<<"factorial is="<<fact<<endl;
    return 0;
}