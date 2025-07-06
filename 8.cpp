// GCD - Better 

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int gcd(int a,int b){
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}


int main(){
    int a,b;
    cin>>a>>b;
    int result= gcd(a,b);
    cout<<"Gcd : "<<result;
}