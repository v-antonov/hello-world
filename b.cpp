#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int n=a.size();
    string z, b;
    if(n%2==1)
    {
        cout<<"111"<<endl;
        for(int i=0; i<n/2; i++)
        {
            z+=a[i];
            cout<<"Z: "<<z<<endl;
        }
        for(int i=n; i>n/2; i--)
        {
            b+=a[i];
            cout<<"B: "<<b<<endl;
        }
        if(z==b) cout<<"Yes";
        else cout<<"No";
    } else
    if(n%2==0)
    {
        cout<<"222"<<endl;
        for(int i=0; i<n/2; i++)
        {
            z+=a[i];
            cout<<"Z: "<<z<<endl;
        }
        for(int i=n; i>=n/2; i--)
        {
            b+=a[i];
            cout<<"B: "<<b<<endl;
        }
        if(z==b) cout<<"Yes";
        else cout<<"No";
    }
}

