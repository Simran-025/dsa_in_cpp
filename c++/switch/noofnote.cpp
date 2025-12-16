#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter value of num=";
    cin>>num;
    while(num != 0){
        int code=0;
        if(num>=100) code= 1;
        else if(num>=50) code=2;
        else if(num>=20) code=3;
        else code=4;
        switch(code){
            case 1:cout<<"No. of 100 notes="<<num/100<<endl;
            num=num%100;
            break;
            case 2:cout<<"No. of 50 notes="<<num/50<<endl;
            num=num%50;
            break;
            case 3:cout<<"No. of 20 notes="<<num/20<<endl;
            num=num%20;
            break;
            case 4:cout<<"No. of 1 notes="<<num/1<<endl;
            num=num%1;
            break;
            default: cout<<"Invalid";
        }
    }
}