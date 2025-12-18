#include <iostream>
using namespace std;

int main()
{

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '1':
            sum += arr[0];
            break;
        case '2':
            sum += arr[1];
            break;
        case '3':
            sum += arr[2];
            break;
        case '4':
            sum += arr[3];
        }

       
    }

    cout << sum;
    return 0;
}