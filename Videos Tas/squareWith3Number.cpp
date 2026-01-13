#include <iostream>
using namespace std;

int main()
{
    int num = 1, row;
    cout << "how many rows do you want ? :";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}