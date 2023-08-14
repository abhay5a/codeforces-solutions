#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b;
    string s;
    getline(cin,s);
    l=s.size();
    b=0;
    while(b<l)
    {
        if(s[b]=='.'){
            cout<<"0";
            b=b+1;
        }
        if(s[b]=='-' && s[b+1]=='.')
        {
            cout<<"1";
            b=b+2;
        }
        if(s[b]=='-' && s[b+1]=='-')
        {
            cout<<"2";
            b=b+2;
        }
    }
    return 0;
}