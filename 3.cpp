// PALINDROME

#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int dup = n;
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }

    if(rev==dup){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(isPalindrome(n)){
        cout<<"It is a Palindrome"<<endl;
    }

    else{
        cout<<"Not a Palindrome"<<endl;
    }
}