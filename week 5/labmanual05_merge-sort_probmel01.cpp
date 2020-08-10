#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int num1 = m - l + 1;
    int num2 = r - m;
    int L[num1], R[num2];
    for (i = 0; i < num1; i++)
    {
        L[i] = a[l + i];
    }
    for (j = 0; j < num2; j++)
    {
        R[j] = a[m + 1+ j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < num1 && j < num2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < num1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < num2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}
void printaay(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    if(size%2==0)
    {
        printf("\nMedian Value: %d\n",(A[size/2]+A[(size/2)-1])/2);
    }
    else printf("\nMedian Value: %d\n",A[size/2]);
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int a[1000], array_size;
    printf("Enter The size of the Array: ");
    scanf("%d", &array_size);
    printf("Enter Elements of Array : \n");
    for(int i = 0; i < array_size; i++)
    {
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, array_size - 1);
    printf("\nSorted Array is : ");
    printaay(a, array_size);

    return 0;
}
