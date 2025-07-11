// PRIME NUMBER
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    int count = 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime";
    }
    return 0;
}