#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, coun, res,len,h,sp;
    string st;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&len);
        getchar();
        cin>>st;
        coun=1;
        h=0;
        for(int i=0;i<len;i++)
        {
            if(st[i]=='T')
            {
                if(h!=0 )
                {
                    h=0;
                }
                else{
                   // printf("Invalid\n");
                    coun=1;
                    break;
                }
            }
            else if(st[i]=='H' )
            {
                if(h==0){
                h=1;
                coun=0;
            }
            else
            {
                coun=1;
                break;
            }
            }
            else if(st[i]=='.')
            {
                coun=0;
            }
        }
        if(coun==0 && h==0)
        {
            printf("Valid\n");
        }
        else
            printf("Invalid\n");
    }
}
