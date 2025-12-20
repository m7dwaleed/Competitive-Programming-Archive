#include<iostream>
#include<string>
using namespace std;


int main(){

int n;
cin>>n;

string s[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}

size_t sz;
for(int i=0;i<n;i++){
   sz= s[i].length();
   if(sz>10){
    cout<<s[i][0]<<sz-2<<s[i][sz-1]<<endl;
   }else{
    cout<<s[i]<<endl;
   }
}
    return 0;
}