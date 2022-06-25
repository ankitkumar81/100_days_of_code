#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    int a[10];

    while(n!=0){
        a[i]=n%2;
        n=n/2;
        ++i;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j];
    }
}

//for any base, the code remains same, replace 2 with 8 and 16 
// for octal and hex res.