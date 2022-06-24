// armstrong
#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n;
    cin>>n;
    int tmp=n,rem;
    int sum=0;

    // digits in an integer
    int digit = floor(log10(tmp) + 1);
    //cout<<digit<<"\n";

    //finding sum 
    while(tmp!=0){
        rem = tmp % 10;
        sum = sum + ceil(pow(rem,digit)); 
        tmp = tmp/10;
    }
    //cout<<sum<<"\n";
    if(sum==n){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}
