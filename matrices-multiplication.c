#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y[x][x],i=0,j=0;
    for (;i<x;i++){
        for (j=0;j<x;j++){
            scanf("%d",&y[i][j]);
        }
    }
    
    i=0;
    j=0;
    int z[x][x];
    for (;i<x;i++){
        for (j=0;j<x;j++){
            scanf("%d",&z[i][j]);
        }
    }
    i=0;
    j=0;
    int a=0,ii=0,rand=0;
    for (;i<x;i++){
        for (ii=0;ii<x;ii++){
            for (rand=0;rand<x;rand++){
                a=a+y[i][rand]*z[rand][ii];
            }
            if (ii!=x-1){printf("%d ",a);}
            else {printf("%d\n",a);}
            a=0;
        }
    }
    return 0;
}
