#include <iostream>
using namespace std;
int bs(int arr[], int low, int high, int num)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}
//  
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    int pos = bs(arr, 0, n - 1, num);
    if (pos == -1)
    {
        cout << "number is not present ";
    }
    else
    {
        cout << "number is present at " << pos << " position";
    }
    return 0;
}