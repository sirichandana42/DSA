#include<iostream>
using namespace std;
int main()
{
    int n,max;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<"largest number in the array is:"<<max;
return 0;
}