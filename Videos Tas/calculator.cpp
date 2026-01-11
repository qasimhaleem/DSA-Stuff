#include <iostream>
using namespace std;
int main()
{
    int a, b, result;
    char op;
    cout << "input value of A" << endl;
    cin >> a;
    cout << "input value of B" << endl;
    cin >> b;
    cout << "Enter Opration Oprator (+,-,*,/)" << endl;
    cin >> op;

    if (op == '*')
    {
        result = a * b;
    }
    else if (op == '-')
    {
        result = a - b;
    }
    else if (op == '+')
    {
        result = a + b;
    }
    else if (op == '/')
    {
        result = a / b;
    }

    cout << "Solution for the give values is :" << result << endl;
}
