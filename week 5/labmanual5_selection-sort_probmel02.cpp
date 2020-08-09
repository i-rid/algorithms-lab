#include <bits/stdc++.h>
using namespace std;
int main()
{
     //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a[20], i,j,t,n, pos, minIndex,res,tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d",&t);
    for (i = 0; i < t; i++)
    {
        minIndex = i;
        for (j = i+1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        tmp = a[minIndex];
        a[minIndex] = a[i];
        a[i] = tmp;
    }
    printf("sorted list: ");
    for(i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
}
