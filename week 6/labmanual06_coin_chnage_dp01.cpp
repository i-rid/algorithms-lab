/*Suppose you want to pay back someone with 16 taka and you have unlimited supply of 1
taka, 2 taka, 8 taka and 12 taka notes. Your target is to use the minimum number of notes
to payback the said amount of money. That means how many notes you chose, write the
program.*/

#include <bits/stdc++.h>
using namespace std;

int minimumCoins_arr(int coins_arr[], int m, int V)
{
   if (V == 0) return 0;

   int res = INT_MAX;

   for (int i=0; i<m; i++)
   {
     if (coins_arr[i] <= V)
     {
         int sub_res = minimumCoins_arr(coins_arr, m, V-coins_arr[i]);

         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "", stdout);
    int coins_arr[] =  {1, 2, 8, 12};
    int m = sizeof(coins_arr)/sizeof(coins_arr[0]);
    int V = 16;
    printf("Coins Need: %d \n",minimumCoins_arr(coins_arr, m, V));

    return 0;
}
