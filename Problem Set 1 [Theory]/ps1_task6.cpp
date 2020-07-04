#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n=331;
    long long int arr[n];
    arr[0]=0,arr[1]=1;

    for(i=2;i<=n;i++)
    {
        arr[i]=(arr[i-1]+arr[i-2])%10;
    }
    printf("%lld\n",arr[n]);
}
