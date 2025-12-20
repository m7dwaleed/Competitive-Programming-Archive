#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
cin>>s;

size_t sz=s.length();
for(int i=0;i<sz;i++){
    if(s[i]==','){
        s[i]=' ';
    }else{
    if (isupper(s[i])){
        s[i]=tolower(s[i]);
    }else{
        s[i]=toupper(s[i]);
    }
}
}

cout<<s;

    return 0;
}