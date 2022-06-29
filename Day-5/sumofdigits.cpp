#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[100];
    cin>>str;
    int sum=0;

    for(int i=0;i<strlen(str);i++){
        if(isdigit(str[i])){
            sum=sum+(str[i]-'0');
        }
    }
    cout<<sum;
}