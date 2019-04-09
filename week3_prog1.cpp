#include <iostream>
using namespace std;

int main()
{
    char op;
    int n1, n2;

    cout << "Enter operator + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> n1 >> n2;

    switch(op)
    {
        case '+':
            cout << n1+n2;
            break;

        case '-':
            cout << n1-n2;
            break;

        case '*':
            cout << n1*n2;
            break;

        case '/':
            cout << n1/n2;
            break;

        default:
            cout << "operator not correct";
            break;
    }

    return 0;
}
