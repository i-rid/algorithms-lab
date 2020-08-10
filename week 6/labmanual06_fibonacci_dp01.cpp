/*Write a program to display nth term of Fibonacci series of n terms.*/

#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    int fib[n+2];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "", stdout);
    int n=9;
    printf("%d\n",fibo(n));
}
