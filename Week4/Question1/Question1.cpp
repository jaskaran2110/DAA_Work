#include <bits/stdc++.h>
using namespace std;
        
int counter = 0;
int inver = 0;



void merge(int arr[], int lowest, int mid, int highest){
    vector<int> ta;
    int temp;
    
    int i = lowest , j = mid+1; int c = 0;
    while(i <= mid and j <= highest){
        
        counter=counter+1;
        if(arr[i] <= arr[j]){
            temp = arr[i];
            ta.push_back(temp);
            i=i+1;
        }else{
            inver = inver + (mid-i)+1;
            temp = arr[j];
            ta.push_back(temp);
            j=j+1;
        }
    }
    
    while(i <= mid){
        temp = arr[i];
        ta.push_back(temp);
        i=i+1;
    }
    while(j <= highest){
        temp = arr[j];
        ta.push_back(temp);
        j=j+1;
        
    }
    
    for(int i=lowest;i<=highest;i++){
        arr[i] = ta[c];
        c=c+1;
    }
}


void merge_sort(int a[], int lowest, int highest){
    
    int mid = (highest+lowest)/2;
    
    if(lowest >= highest) return;
    
    merge_sort(a, lowest, mid);
    merge_sort(a, mid+1, highest);
    merge(a, lowest, mid, highest);
}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        counter = 0;
        inver = 0;

        merge_sort(arr, 0, n-1);

        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
        cout << "Comparison: " << counter << '\n';
        cout << "Inversions: " << inver  << '\n';    
    }

    return 0;
}