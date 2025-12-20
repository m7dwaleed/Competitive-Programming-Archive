#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int sz3;
    string s1, s2, s3;
    for (int i = 0; i < n; i++)
    {

        cin >> s1 >> s2;

        size_t sz1 = s1.length();
        size_t sz2 = s2.length();

        sz3=max(sz1,sz2);
          
        for (int k = 0; k < sz3; k++)
        {
           int i=0;
          int j=0;
           if(i<sz1){
            cout<<s1[i];
            i++;
           }
           if(j<sz2){
            cout<<s2[j];
            j++;
           }
        }
        cout<<endl;
    }

   

    return 0;
}