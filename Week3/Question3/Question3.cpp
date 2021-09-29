#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        bool flag = false;
        int j,temp;
         
         for (int i = 1; i < n; i++) {
            temp = arr[i];
            j = i - 1;
            while (j >= 0 && temp < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            j++;
            arr[j] = temp;
            if (arr[j - 1] == arr[j]) {
                flag = true;
                break;
            }
        }

         
         
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }

    return 0;
}