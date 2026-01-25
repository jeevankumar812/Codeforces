#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;

    while(k--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        bool found=false;
        int dots=0;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='.' && i+2<n && s[i+1]=='.' && s[i+2]=='.')
            {
                found=true;
                break;
            }

            if(s[i]=='.')
            {
                dots++;
            }
        }


        if(found)
        {
            cout<<2<<endl;
        }
        else 
        {
            cout<<dots<<endl;
        }
    }

    return 0;
}
