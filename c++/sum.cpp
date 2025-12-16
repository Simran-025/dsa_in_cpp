#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number=";
    cin>>n;
    int sum=0,sum1=0;
    for(int i=1;i<=n;i++){   //Sum of n terms 
        sum+=i;
        if(i%2!=0){
            sum1+=i;
        }
    }
    cout<<"sum of n terms="<<sum<<endl;
    cout<<"sum of n odd terms="<<sum1<<endl;

    return 0;
}