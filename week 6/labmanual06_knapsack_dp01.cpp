/*Suppose, you go to a market with a knapsack, which maximum capacity is 5kg. Therefour items with weight and value. Then find the maximum profit and print it.*/

#include <bits/stdc++.h>
using namespace std;

void sort(int n,int w[],int p[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(w[j]>w[j+1])
            {
                swap(w[j],w[j+1]);
                swap(p[j],p[j+1]);
            }
        }
    }
}
int knapSack(int n,int p[],int w[],int bag)
{
    sort(n,w,p);
    int i,j;
    int arr[n+1][bag+1];
    for(i=0;i<=n;i++)
    {
        arr[i][0]=0;
    }
    for(j=0;i<=bag;j++)
    {
        arr[0][j]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=bag;j++)
        {
            if(w[i-1]>j)
                arr[i][j]=arr[i-1][j];
            else
                arr[i][j]=max((p[i-1]+arr[i-1][j-w[i-1]]),arr[i-1][j]);
        }
    }
    return arr[n][bag];
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "", stdout);
    int n=4,bag=5;
    int i;
    int p[4]={12,10,20,15};
    int w[]={2,1,3,2};
    int ans=knapSack(n,p,w,bag);
    printf("Maximum Profit: %d\n",ans);

}
