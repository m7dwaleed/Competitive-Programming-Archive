#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, m;
    cin >> s >> m;
    int Length_S = s.length();
    int Lenght_M = m.length();

    cout<<Length_S<<" "<<Lenght_M<<endl;
    string Con=s+" "+m;
    cout<<Con<<endl;
}