#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, num, arr[1000],res,con;
    scanf("%d",&test);
    while(test--)
    {
        con=0;
        scanf("%d",&num);
        int j=1;
        res=(num/2)+1;
        for(int i=1; i<=num; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1; i<=num; i++)
        {
            if(arr[i]!=j)
            {
                con=1;
                break;
            }
            if(j==res)
            {
                j--;
                res--;
            }
            else
                j++;
        }
        if(res==0)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}
