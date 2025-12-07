#include <iostream>
using namespace std;
int main()
{
    int rows, spaces;
    cout << "Please enter the number of rows ";
    cin >> rows;

    int i = 1;
    while (i <= rows)
    {
        int spaces = rows - i;
        while (spaces > 0)
        {
            cout << "  ";
            spaces--;
        }

        int num = 1;
        while (num <= i)
        {
            cout << num << " ";
            num++;
        }

        int lol = i - 1;
        while (lol > 0)
        {
            cout << lol << " ";
            lol--;
        }
        cout << endl;
        i++;
    }
}
