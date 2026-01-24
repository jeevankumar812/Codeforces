#include<bits/stdc++.h>
using namespace std;

bool isyesYes(string &s1, string &s2)
{
    return s1==s2;
}

int main()
{
    int k;
    cin>>k;

    string str="yes";

    while(k--)
    {
        string s;
        cin>>s;
        
        transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c){ return tolower(c); });

        if(isyesYes(s,str))
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}