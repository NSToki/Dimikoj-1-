#include<stdio.h>
int main()

{
    int T,n,i;
    scanf("%d",&T);
    for(i = 1; i <= T; i++){
        scanf("%d",&n);

        if(n % 2 == 0)
            printf("odd\n");

        else
            printf("even\n");

    }

    return 0;
}
