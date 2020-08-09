#include <bits/stdc++.h>
using namespace std;
int main()
{
     //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int a[20], i,j,n, pos, minIndex,res,tmp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n-1; i++)
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
    res=pow(a[1],a[n-1]);
    printf("\n");
    printf("the result: %d\n",res);
}
