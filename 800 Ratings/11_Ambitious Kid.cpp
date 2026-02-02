#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(abs(arr[i])<mini)
        {
            mini=abs(arr[i]);
        }
    }

    while(mini>0)
    {
        cnt++;
        mini-=1;
    }
    cout<<cnt<<endl;
}