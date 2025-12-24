#include<iostream>
#include<string>
using namespace std;

int main(){
string A;
cin>>A;

string B={"hello"};
 size_t last_pos=0;
for(int i=0;i<5;i++){
    
    size_t idx=A.find(B[i]  , last_pos);
    if(idx == string::npos){
        cout<<"NO\n";
        return 0;
    }
    last_pos=idx+1;
    
}
cout<<"YES\n";

    return 0;
}