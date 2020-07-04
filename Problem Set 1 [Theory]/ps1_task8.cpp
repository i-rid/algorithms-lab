    #include <bits/stdc++.h>
    using namespace std;
    int eulerGCD(int a,int b)
    {
        if (b == 0)return a;
        return eulerGCD(b,a%b);
    }
    int main()
    {
        int a=60,b=24,gcd,lcm;
        gcd=eulerGCD(a,b);
        lcm=(a*b)/gcd;
        cout<<lcm<<endl;
    }
