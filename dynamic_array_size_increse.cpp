#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a[3]; //declare as static

    int *a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int b[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    b[3] = 40;
    b[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    delete[] a; // here we delete the a array & if we print the a array it will give us garbage value
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}