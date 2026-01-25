#include<bits/stdc++.h>
using namespace std;

void lineTrip(vector<int>&ans, vector<int>&arr,int n, int dest)
{
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            ans.push_back(arr[i]);
            continue;
        }

        int val=abs(arr[i]-arr[i-1]);
        ans.push_back(val);
    }

    int rem=abs(arr[n-1]-dest);
    rem=2*rem;
    ans.push_back(rem);
}

int main()
{
    int k;
    cin>>k;

    while(k--)
    {
        int n,dest;
        cin>>n>>dest;

        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>ans;

        lineTrip(ans,arr,n,dest);

        int maxi=*max_element(ans.begin(),ans.end());

        cout<<maxi<<endl;

    }
    return 0;
}