#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> v, int low, int high, int key){
    int mid = (low + high) /2 ;
    if (low > high)
    {
        return -1;
    }
    if (v[mid] == key){
        return mid;
    }

    else if(v[mid] > key){
        return binary_search(v, low, mid-1, key);
    }

    else{
        return binary_search(v, mid+1, high, key);
    }

}


int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> vec;
        int n;
        cin>>n;
        for(int i =0 ; i < n; i++){
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }

        bool flag = false;

        for(int i = 0 ; i < n-2; i++){

            for(int j = i + 1; j < n - 1; j++){

                int x=  vec[i] + vec[j];
                int ans = binary_search(vec, j, n-1, x);

                if(ans!=-1){
                    cout<<i<<", "<<j<<", "<<ans<<endl;
                    flag = true;
                }

            }
        }
        if (!flag){
            cout<<"No Sequence found"<<endl;
        }
    }
    return 0;
}
