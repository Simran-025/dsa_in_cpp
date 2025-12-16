#include <iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    if(n<=1){
        cout<<"Not prime\t"<<n<<endl;
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"prime\t"<<n;
    }
    else{
        cout<<"Not prime\t"<<n<<endl;
    }
    return 0;
}