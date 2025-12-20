
#include<iostream>
#include<string>
using namespace std;


int main(){

string s;
cin>>s;
int sum=0;
size_t sz=s.length();
for(int i=0;i<sz;i++){
    sum+=s[i]-'0';
}
cout<<sum;
    return 0;
}