#include <iostream> 
  
using namespace std; 
  
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2 * i+1 ; // left = 2*i + 1 
    int r = 2 * i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) { 
       
        int temp=arr[i];
        arr[i]=arr[largest]; 
        arr[largest]=temp;
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 
  
// Function to build a Max-Heap from the given array 
void buildHeap(int arr[], int n) 
{ 
    // Index of last non-leaf node 
    int startIdx = (n/2)-1; 
  
    
    for (int i = startIdx; i >= 0; i--) { 
        heapify(arr, n, i); 
    } 
    for (int i = n-1; i >= 0; i--) { 
           int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp; 
  
        heapify(arr, i, 0); 
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
    //int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 }; 
  
   // int n = sizeof(arr) / sizeof(arr[0]); 
  int n;
  cout<<"enter the size of array";

  cin>>n;
  int arr[n];
  cout<<"enter the array";
  for (int i = 0; i < n; i++)
  {
      /* code */
      cin>>arr[i];
  }
  
    buildHeap(arr, n); 
  
    printHeap(arr, n); 
   
  
    return 0; 
} 

