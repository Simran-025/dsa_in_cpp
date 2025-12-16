#include <iostream>
using namespace std;
long long int binarysqrt(int x){
    long long int s=0,e=0,ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        int sq=mid*mid;
        if(sq==x){
            return mid;
        }
        if(sq<x){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double more_precise(int x,int precision,int tempsol){
    double ans=tempsol,factor=1;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<x;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number=";
    cin>>n;
    int temp=binarysqrt(n);
    double ans=more_precise(n,3,temp);
    cout<<ans;
}