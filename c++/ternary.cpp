#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    cout << (n>=0 ? "positive" : "Negative") << endl;
    cout << (n%2==0? "Even" : " odd");
    return 0;
}