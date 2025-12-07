#include <iostream>
using namespace std;

int sum_array(int *arr, int lenght)
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum = sum + *(arr + i);
    }
    return sum;
}

void largest_num(int *arr, int length)
{
    int max = 0;

    for (int i = 0; i < length; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    cout << max;
}

void swap_num(int *arr, int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + length - i - 1);
        *(arr + length - i - 1) = temp;
    }

    for (int i = 0; i < length; i++)
    {
        cout << *(arr + i) << " ";
    }
}

void odd_even(int *arr, int length)
{
    int odd = 0, even = 0;
    for (int i = 0; i < length; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Number of Evens: " << even << " Number of Odds: " << odd;
}

void print_address(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << (arr + i) << " ";
    }
}

void average(int *arr, int length, int sum)
{
    int avg = 0;
    avg = sum / length;
    cout << avg;
}

void consec_diff(int *arr, int length)
{
    int diff = 0;
    for (int i = 0; i < length - 1; i++)
    {
        diff = *(arr + i) - *(arr + i + 1);
        cout << diff << " ";
    }
}



int main()
{
    int marks[] = {1, 2, 34, 4, 5, 6, 4, 43, 2, 34};
    int length = sizeof(marks) / sizeof(marks[0]);
    int sum;
    cout << sum_array(marks, length);
    sum = sum_array(marks, length);
    cout << endl;
    largest_num(marks, length);
    cout << endl;
    // swap_num(marks, length);
    cout << endl;
    odd_even(marks, length);
    cout << endl;
    print_address(marks, length);
    cout << endl;
    average(marks, length, sum);
    cout << endl;
    consec_diff(marks, length);
}