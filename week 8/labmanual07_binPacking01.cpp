#include <bits/stdc++.h>
using namespace std;

int binpack(int students_num[],int n,int c)
{
    int res=0,seat_left=c;
    for(int i=0;i<n;i++)
    {
        if(students_num[i]>seat_left  )
        {
            res++;
            seat_left=c-students_num[i];
        }
        else seat_left=seat_left-students_num[i];
    }
    return res;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "", stdout);
    int students_num[]={1,2,3,4,5,6};
    int c=7;
    int n=sizeof(students_num)/sizeof(students_num[0]);
    printf("Minimum Bus Need : %d ",binpack(students_num,n,c));
    cout<<endl;
    
}
