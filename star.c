#include <stdio.h>

int main() {
    int t=0;

    scanf("%d",&t);

    for(int i=0 ; i < t ; i++)
        {
            for(int j=0; j < t-i-1 ;j++)
                {
                    printf(" ");
                }
            for(int k=0; k < i+1 ; k++)
                {
                    printf("*");
                }
            printf("\n");
            
        }
    return 0;
}