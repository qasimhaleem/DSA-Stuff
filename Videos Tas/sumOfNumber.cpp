#include <iostream>
using namespace std;

int main()
{
    int num;
    int result = 0;
    cout << "Enter Any Number" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            result = result + i;
        }
    }

    cout << "The result is : " << result;
}