#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
return 0;
}

