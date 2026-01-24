#include<bits/stdc++.h>
using namespace std;

void CreateWords(string &str1, string &str2)
{
    swap(str1[0],str2[0]);
}

int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        string str1;
        string str2;
        cin>>str1>>str2;

        CreateWords(str1,str2);

        cout<<str1<<" "<<str2<<endl;

    }
    return 0;
}