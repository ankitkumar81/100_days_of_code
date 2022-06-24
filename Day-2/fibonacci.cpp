// armstrong
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int);

int main(){
    int  n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}

int fibonacci(int i){
    if(i<=1){return i;}
    else{
        return (fibonacci(i-1)+fibonacci(i-2));
    }
}
