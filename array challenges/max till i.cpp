#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max;
    max=a[0];
    cout<<max;
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            cout<<a[i];
            max=a[i];
        }
        else{
            cout<<max;
        }
    }
    return 0;
}