#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[5]; // static array

    int *arr = new int[5]; // declare a dynamic array

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}