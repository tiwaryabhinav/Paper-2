#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"ENTER NUMBER\n";
    int n;
    cin>>n;
    int col=2*n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";
        for(int j=1;j<=col-2*i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";
        for(int j=1;j<=col-2*i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
