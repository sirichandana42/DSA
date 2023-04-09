#include <iostream>
using namespace std;
int twopairSum(int n, int a[], int key)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == key)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout<<twopairSum(n,a,key);
}

//optimised

#include <iostream>
using namespace std;
int twopairSum(int n, int a[], int key)
    {
       int low=0,high=n-1;
       while(low<=high)
       {
        if(a[low]+a[high]==key)
        {
            cout<<low<<" "<<high<<endl;
            return 1;
        }
        else if(a[low]+a[high]>key)
        {
            high--;
        }
        else{
            low++;
        }
        }
       }
int main()

{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout<<twopairSum(n,a,key);
}
