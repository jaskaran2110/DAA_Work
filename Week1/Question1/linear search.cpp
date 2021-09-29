/*
 * Given an array of nonnegative integers, design a linear algorithm and
 * implement it using a program to find whether given key element is present in
 * the array or not. Also find the total number of comparisions for each input
 * case. Time complexity = O(n), where n is the size of the input
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
        int flag = 0,counter=0;
        for (int i = 0; i < n; i++) {
            counter ++;
            if (arr[i] == key) {
                flag=1;
                break;
            }
        }
        if(flag ==1) {
            cout << "present" << counter << endl;
            
        }
        else {
            cout << "not present" << counter << endl;
        }
        
    }
    return 0;
}
