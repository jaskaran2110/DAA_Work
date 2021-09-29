#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;    
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {   
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        cin>>k;
        int low=0,high=n-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(v[mid]==k)
            {
                int count=0;
                for(int i=0;i<n;i++)
                {
                    if(v[i]==k) count++;
                }
                cout<<k<<" "<<count<<endl;
                break;
            }
            else if(v[mid]<k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return 0;
}
