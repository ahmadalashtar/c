#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int j=0;
    int i;
    int m;
    for (i=x;i>0;i--){
        for (m=1;m<=i;m++){
            if (i%m==0 && i!=m){
                j=j+m;
            }
            else{
                continue;
            }
        }
        if (j==i){
            printf("%d IS A PERFECT NUMBER\n",i);
        }
        else{
            printf("%d isn't a perfect number\n",i);
        }
        j=0;
    }
}

