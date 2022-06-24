// palindrome

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0,tmp=n;
    while(tmp!=0){
        rev = rev*10 + tmp%10;
        tmp=tmp/10;
    }
    if(rev==n){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}