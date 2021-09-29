#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    int j,minimal, count = 0, swaps = 0,temp;
    for (int i = 0; i < n - 1; i++)
    {   
        temp = arr[i];
        minimal = i;
        j = i - 1;
        for (j = i + 1; j < n; j++)
        {
            count++;
            if (arr[j] < arr[minimal])
                minimal = j;
            
        }
        arr[i] = arr[minimal];
        arr[minimal] = temp;
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
        selection_sort(arr, n);
    }
    return 0;
}