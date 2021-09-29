#include <bits/stdc++.h>

using namespace std;

int compare = 0, swap_count = 0;

int partition(int arr[], int low, int high) {
    int counter = low - 1;
    int pivot_point = arr[high]; 
    int temp;
    
    for (int i = low; i < high; i++) {
        compare = compare + 1;
        if (arr[i] < pivot_point) {
            swap_count = swap_count + 1;
            
            temp = arr[i];
            arr[i] = arr[++counter];
            arr[counter] = temp;
        }
    }
    if (counter + 1 != high) {
        swap_count = swap_count + 1;
        
        temp = arr[counter + 1];
        arr[counter + 1] = arr[high];
        arr[high] = temp;
    }
    counter = counter +1;
    return counter;
}


void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int position = partition(arr, low, high);
        quick_sort(arr, low, position - 1);
        quick_sort(arr, position + 1, high);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        compare = 0;
        swap_count = 0;
        
        quick_sort(arr, 0, n - 1);
        
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "comparisons: " << compare << "\n";
        cout << "swaps: " << swap_count << "\n";
    }

    return 0;
}