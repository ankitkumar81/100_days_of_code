#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    unordered_map<char,int> dup;
    int len= str.length();
    for(int i=0;i<len;i++){
        dup[str[i]]++;
    }

    for(auto it:dup){
        if(it.second>1){
        cout<<it.first<<" "<<it.second<<"\n";
        }
    }
}