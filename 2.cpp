// REVERSE A NUMBER

#include<iostream>
using namespace std;

int Reverse(int n){
    int rev=0;
    while(n>0){
        int rem = n%10;
        rev = (rev*10)+rem;
        n=n/10;
    }
    return rev;
}

int main(){
    int n;
    cin>>n;
    int reverseNo = Reverse(n);
    cout<<"Reversed Number: "<<reverseNo<<endl;
    return 0;
}