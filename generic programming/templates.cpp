#include <bits/stdc++.h>
using namespace std;

template <typename T> // for making program generic


// linear Search
int search(T arr[], int n, T key)
{
    for (int p = 0; p < n; p++)
        if (arr[p] == key)
            return p;
    return n;
}

int main()
{
    // integer
    int a[] = {1, 2, 3, 4, 6, 7, 10, 12};
    int key = 10;
    int size = sizeof(a) / sizeof(int);
    cout << search(a, size, key) << endl;

    // float
    float b[]={1.1,1.2,1.3,1.4};
    float k = 1.2;
    cout << search(b,4,k) << endl;

    // we can use the search func on char, strings etc
}