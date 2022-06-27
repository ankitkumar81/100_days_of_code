#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int flag=0;
    int len=str.length();
    for(int i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
        }
    }

    if(flag==1){
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
    }
}