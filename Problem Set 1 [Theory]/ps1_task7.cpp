    #include <bits/stdc++.h>
    using namespace std;
    int eulerGCD(int a,int b)
    {
        if (b == 0)return a;
        return eulerGCD(b,a%b);
    }
    int main()
    {
        int a,b;
        printf("%d\n",eulerGCD(3768,1701));
    }
