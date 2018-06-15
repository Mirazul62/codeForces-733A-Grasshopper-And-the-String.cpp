#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,count=1,r=0;
    string s;
    cin>>s;
    r=count;
    for(i=0;s[i]!='\0';i++)
    {
        count++;



        if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I' || s[i]=='Y')
        {
           count=1;
        }
        if(count>=r)
        {
            r=count;
        }

    }
    cout<<r;
}
