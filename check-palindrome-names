#include <stdio.h>
int main()
{
    char s[100];
    int i;
    int j=0;
    scanf("%s",s);
    for(i = 0;s[i] != '\0'; i++){
    if (s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
        }
        else if (s[i]>=97 && s[i]<=122){
    
        }
        else {printf("Falsche Eingabe"); return 0;break;}
    }

    i=i-1;
    char y[100];
    for (j=0;j<=i;j++){
        y[j]=s[i-j];
    }
    for (j=0;j<=i;j++){
        if (y[j]!=s[j]){
            printf("nein");
            return 0;
        }
            
    }
    printf("ja");
    return 0;
}
