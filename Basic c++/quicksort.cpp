#include <iostream>
using namespace std;
int partition(int a[], int low, int high);
void printaray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void quicksort(int a[], int low, int high)
{

    if (low < high)
    {
        int partitionindex = partition(a, low, high);
        quicksort(a, low, partitionindex - 1);
        quicksort(a, partitionindex + 1, high);
    }
}
int partition(int a[], int i, int j)
{

    int low = i + 1;
    int high = j;

    while (low <= high)
    {
        while (a[i] >= a[low])
        {
            low++;
        }
        while (a[i] < a[high])
        {
            high--;
        }
        if (low < high)
        {
            int temp = a[low];
            a[low] = a[high];
            a[high] = temp;
        }
    }
    int temp = a[i];
    a[i] = a[high];
    a[high] = temp;
    return high;
}
int main()
{
    int n;
    cout << "enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "enter the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printaray(arr, n);
    printf("\n");
    quicksort(arr, 0, n - 1);
    printaray(arr, n);
    return 0;
}
