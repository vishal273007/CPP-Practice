// C++ program for calculator using Switch Statement.
#include <iostream>
using namespace std;

int main()
{

    float n1, n2;
    cout << "Enter two numbers :" << endl;
    cin >> n1 >> n2;

    char op;
    cout << "Enter an arithmetic operator :" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << "Enter another operator!" << endl;
        break;
    }

    return 0;
}