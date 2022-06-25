//factorial
#include<bits/stdc++.h>
using namespace std;

int factorial(int);
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return (n* factorial(n-1));
    }
}