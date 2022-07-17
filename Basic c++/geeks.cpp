#include <iostream> 
  
using namespace std; 
   
// To heapify a subtree rooted with node i which is 
// an index in arr[]. N is size of heap 
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2 * i + 1; // left = 2*i + 1 
    int r = 2 * i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// Function to build a Max-Heap from the given array 
void buildHeap(int arr[], int n) 
{ 
    // Index of last non-leaf node 
    int startIdx = (n / 2) - 1; 
  
    // Perform reverse level order traversal 
    // from last non-leaf node and heapify 
    // each node 
    for (int i = startIdx; i >= 0; i--) { 
        heapify(arr, n, i); 
    } 
} 
 
void printHeap(int arr[], int n) 
{ 
    cout << "Array representation of Heap is:\n"; 
  
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
  
// Driver Code 
int main() 
{ 
   int arr[] = { 44,30,50,22,60,55,77,55}; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    buildHeap(arr, n); 
  
    printHeap(arr, n); 
   
  
    return 0; 
} 

