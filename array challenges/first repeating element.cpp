#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N=12343;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    int minidx= INT8_MAX;

    for(int i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1)
        {
            minidx=min(minidx,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }
    }
    if(minidx==INT8_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx<<endl;
    }
    return 0;
}