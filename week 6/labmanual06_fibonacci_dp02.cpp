/*Are you know the Fibonacci series? If yes, given a positive value with t. Then find the solution and also print it*/

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
    int num,t;
    printf("Enter t: ");
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&num);
        printf("Fibonacci %d: %d\n ",i,fibo(num));
    }

}
