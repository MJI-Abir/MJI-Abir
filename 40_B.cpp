//40
//40
#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define sq(a) ((a)*(a))
#define rep(i,n) for(int i=0; i<n; i++)
#define ll long long

int const N = 1e5 + 10;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    insertionSort(a,n);
    int count=1;
    for(int i=0; i<n; i++)
    {
        if(i==n-1)
        {
            cout<<a[i]<<" "<<count<<endl;
            break;
        }
        if(a[i]!=a[i+1])
        {
            cout<<a[i]<<" "<<count<<endl;
            count=1;
        }
        else count++;
    }
}