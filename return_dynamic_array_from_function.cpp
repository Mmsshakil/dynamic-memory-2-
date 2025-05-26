#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    // int arr[5];            // static array declar
    int *arr = new int[5]; // daynamic array declar

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    int *x = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}