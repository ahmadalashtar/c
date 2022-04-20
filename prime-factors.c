#include <stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    j=x;
    for (i=2;i<=j;i++)
    {                
        if (x%i==0){                
            if (i==x){ printf("%d\n",x); break;}    
            else if (i!=x){            
                printf("%d\n",i);
                x=x/i;
                i=i-1;
            }
        }
    }
    return 0;
}
