/*
//maximum of all
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


//max till i

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
//sum of all subarrays

#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr=0;
     for(int i=0;i<n;i++)
     {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=a[j];
            cout<<a[j]<<endl;
        }
     }
}


//printing subarrays

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
    for(int i=0;i<n;i++)
     {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k];
            }
            cout<<" ";
        }
     }
}

// longest arithmetic subarray length
#include <iostream>
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
    int pd = a[1] - a[0];
    int curr = 2;
    int ans = 2;
    int j = 2;
    while (j < n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
}


//record breaker

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n]=-1;
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx&&a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
}

//sum of array using functions
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

//first repeating element

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

// subarray with given sum indexes
//dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;cin>>s;
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return  0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
}

//smallest positive missing number
DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD   OWN  DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],curr,mi,ans;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        curr=a[i];
        int j=i;
        while(a[i]>0&&j<n)
        {
            if(a[i]-1!=a[j])
            {
                curr=a[i]-1;
                ans=min(curr,);

            }
            j++;
        }
    }
    if(ans>0)
    {
        cout<<ans;
    }
}


//smallest positive missing number

#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++)
    {
        if(check[i]==0)
        {
            ans=i;
            break;
        }
    }
   cout<<ans<<endl;
   return 0;
}

// kadanes algorithm - printing max subarray value

#include<iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currsum=0,maxsum=0;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(currsum,maxsum);
    }
    cout<<maxsum;
    return 0;
}



// two pair sum - O(n^2)

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
*/
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

