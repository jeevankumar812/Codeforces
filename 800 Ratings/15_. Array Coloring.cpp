#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;

    while(k--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int cnt=0;
        for(auto it:arr)
        {
            if(it%2!=0)
            {
                cnt++;
            }
        }

        if(cnt%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}