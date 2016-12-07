#include <stdio.h>

int main()
{
    int T,n,a,b;

    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);
        a = n/2;
        b = n-a;

        printf("%d %d\n",a,b);
    }
    return 0;
}

