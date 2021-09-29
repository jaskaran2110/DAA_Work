#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int j,minimal, count = 0, swaps = 0,temp;
    for (int i = 1; i < n ; i++)
    {   
        temp = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>temp)
        {
           arr[j + 1] = arr[j];
            j--;
            count++;
            swaps++;
            
        }
        arr[j+1] = temp;
        swaps++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "With " << count<<" comparisons ";
    cout << "and " << swaps<<" swaps"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        insertion_sort(arr, n);
    }
    return 0;
}