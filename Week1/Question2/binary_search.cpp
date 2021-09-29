/*
 * Given an already sorted array of positive numbers, design an algorithm and
 * implement it using a program to find whether given key element is present in
 * the array or not. Also, find the total number of comparsions for each input
 * case/ Time complexity = O(n*log(n)), where n is the size of input).
 */

#include <algorithm>
#include <iostream>

using namespace std;

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
        int left = 0, right = n - 1,mid;
        int counter=0,flag=0;
        
        while (left <= right) {
            mid = (left + right) / 2;
            counter ++;
            if (arr[mid] == key) {
                flag = 1;
                break;
            } else if (arr[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        
        
        if(flag ==1) {
            cout << "Present" << counter << endl;
            
        }
        else {
            cout << "Not Present" << counter << endl;
        }
        
    }
    return 0;
}
