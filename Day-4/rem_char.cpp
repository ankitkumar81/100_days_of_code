// remove char
#include<bits/stdc++.h>
using namespace std;

string remove_char(char*,char);
int main(){
    char str[100];
    gets(str);
    char ch;
    cin>>ch;

    cout<<remove_char(str,ch);
}

string remove_char(char* str,char ch){
   int len=strlen(str);
   for(int i=0;i<len;i++){
     if(str[i]==ch){
        for(int j=i;j<len;j++){
           str[j]= str[j+1];
        }
        len--;
        i--;
     }
   }
   
   return str;
}
