#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>sum;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}