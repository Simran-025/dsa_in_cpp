#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array=";
    cin>>n;
    int a[n];
    cout<<"Enter elements on array=";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}