#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter any number :";
    cin >> num;
    int i = 1, fact = 1;
    while (i <= num)
    {
        fact = (i * fact);
        i++;
    }

    cout << "Factorial of" << num << " is : " << fact;
}