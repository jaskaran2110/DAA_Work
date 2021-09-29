#include <bits/stdc++.h>
using namespace std;

void pair_check(int arr[], int n, int key){
    bool flag = false;
    
     for (int i = 0; i < (n - 1); i++) {
        for (int j = (i + 1); j < n; j++) {
            if (arr[i] + arr[j] == key) {
                cout  << arr[i] <<" "<< arr[j] << "   ";
                
                flag=true;
            }
        }
    }
    cout<< endl;
    
     if (!flag) {
        cout << "No Such pair Exist" << endl;
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
        int key;
        cin >> key;
        
        pair_check(arr,n,key);

    }

    return 0;
}