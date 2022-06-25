// Lcm and hcf

#include<bits/stdc++.h>
using namespace std;

int gcd(int,int);
int main(){
    int n1,n2;
    cin>>n1>>n2;

    int hcf=gcd(n1,n2);
    int lcm = (n1/hcf)*n2;
    cout<<"lcm "<<lcm<<"\n";
    cout<<"hcf "<<hcf<<"\n";
}

int gcd(int n1,int n2){
    if(n2==0){
        return n1;
    }
    else{
        return gcd(n2,n1%n2);
    }
}