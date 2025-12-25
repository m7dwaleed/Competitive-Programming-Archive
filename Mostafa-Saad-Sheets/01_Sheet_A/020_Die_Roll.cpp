#include<iostream>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(){

int x,y;
cin>>x>>y;
int mx=max(x,y);
int r=(6-mx +1);
int g =gcd(r,6);
cout<<r/g<<'/'<<6/g;

    return 0;
}