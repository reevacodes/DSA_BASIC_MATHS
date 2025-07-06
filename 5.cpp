// PRINT ALL DIVISORS 

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int>printDivisors(int n){
    vector<int>divisors;

    for(int i = 1;i<=sqrt(n);i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i!=n/i){
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(),divisors.end());
    return divisors;
}

int main(){
    int n;
    cin>>n;
    vector<int>ans=printDivisors(n);
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}   
