#include <bits/stdc++.h>
using namespace std;
 
int partition(int arr[], int lowest, int right)
{
    int initial = arr[right], i = lowest;
    int temp;
    for (int j = lowest; j <= right - 1; j++) {
        if (arr[j] <= initial) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    
    temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;
    return i;
}

int kthSmallest(int arr[], int k, int lowest, int highest)
{
    if (k > 0 && k <= highest - lowest + 1) {
        
        int position = partition(arr, lowest, highest);

        if (position - lowest == k - 1)
            return arr[position];
        else if (position - lowest > k - 1)
            return kthSmallest(arr,k, lowest, position - 1);
        else
         return kthSmallest(arr, k - position + lowest - 1,position + 1, highest);
    }
 
    return -1;
}
 
 

int main(){

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cin>>k;
        int ans = kthSmallest(arr, k, 0, n-1);
        cout << ans << '\n';
    }

    return 0;
}