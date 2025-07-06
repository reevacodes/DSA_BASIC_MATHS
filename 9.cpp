// GCD - EUCLIDEAN ALGORITHM

#include<iostream>
using namespace std;

int euclidean(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int result=euclidean(a,b);
    cout<<"GCD: "<<result;
    return 0;
}