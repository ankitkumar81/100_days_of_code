// check if a number is power of 2 or not
#include<bits/stdc++.h>
using namespace std;

bool power(int n);
int main(){
    int n;
    cin>>n;

    power(n)? cout<<"yes" : cout<<"no";
}

bool power(int n){
    if(n==0){
        return 0;
    }
    else{
        return (ceil(log2(n)) == floor(log2(n)));
    }
}