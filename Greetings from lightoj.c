#include <stdio.h>

int main()
{
    int Tcase,i,a,b,sum;

    int c = 1;

    scanf("%d",&Tcase);

    for(i = 1; i <= Tcase; i++){

        scanf("%d %d",&a,&b);

        sum = a+b;

        printf("Case %d: %d\n",c,sum);

        c++;
    }
    return 0;
}

