#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "input a character ";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "hello" << endl;
        break;
    case 'b':
        cout << "hii" << endl;
        break;
    case 'c':
        cout << "hudd" << endl;
        break;
    case 'd':
        cout << "hmm" << endl;
        break;

    default:
        cout << "I am still learning" << endl;
        break;
    }

    return 0;
}
