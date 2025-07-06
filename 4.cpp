// ARMSTRONG NUMBER

#include<iostream>
using namespace std;

int isArmstrong(int n){
    int dup=n;
    int sum = 0;
    while(n>0){
        int last_digit = n%10;
        sum = sum + (last_digit*last_digit*last_digit);
        n=n/10;
    }
    return sum==dup;
}

int main(){
    int n;
    cin>>n;
    if(isArmstrong(n)){
        cout<<"It is an Armstrong Number"<<endl;
    }

    else{
        cout<<"It is not an Armstrong number"<<endl;
    }
    return 0;
}