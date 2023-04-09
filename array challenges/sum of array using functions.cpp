#include <iostream>
#include <numeric>
using namespace std;

int arraySum(int a[], int n)
{
    int initial_sum = 0;
    return accumulate(a, a+n, initial_sum);
}

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << arraySum(a, n);
    return 0;
}