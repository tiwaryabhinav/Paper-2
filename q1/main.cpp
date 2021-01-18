#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER SIZE OF ARRAY\n";
    cin>>n;
    int arr[n],i;
    cout<<"ENTER ELEMENTS\n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    vector<int> ans;
    if(n==1)
    {
        cout<<"LEADERS ARE "<<arr[0];
    }
    else
    {
        int sum[n];
        sum[n-1]=-1;
        for(i=n-2;i>=0;i--)
        {
            sum[i]=max(sum[i+1],arr[i+1]);
        }
        cout<<"LEADERS ARE ";
        for(i=0;i<n;i++)
        {
            if(arr[i]>sum[i])
                ans.push_back(arr[i]);
        }

        for(i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
    }
    return 0;
}
