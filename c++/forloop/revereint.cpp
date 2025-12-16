#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number=";
    cin>>n;
    string ans;
    string t=to_string(n);
    int m=t.size();
    for(int i=m-1;i>=0;i++){
        ans += t[i];
    }
    cout<<ans;
}