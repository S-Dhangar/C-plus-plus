#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // 3 2 1 6 7 8
    for (int i = 1; i < n; i++)
    {
        int k = arr[i]; 
        // we will take this another variable instead of using arr[i]

        // because in each iteration arr[i] will be change
        // and the value of array i becomes arr[j] in the
        // same iteration now the value of array[i] is change
        // and now we cant swap it with arr[j] which we have done
        // in line no 32;

        int j = i - 1;
        while (j >= 0 && k < arr[j])
        {
            arr[j + 1] = arr[j];

            j--;
        }
        j++;
        arr[j] = k;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}