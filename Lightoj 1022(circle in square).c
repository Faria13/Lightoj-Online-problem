#include <stdio.h>
#define PI 2 * acos(0.0)
int main()
{
    int T,i;
    double area1,area2,area3,r;
    scanf("%d",&T);
    for(i = 1; i <= T; i++){
        scanf("%lf",&r);
        area1 = (2*r)*(2*r);
        area2 = PI*r*r;
        area3 = area1-area2;
        printf("Case %d: %0.2lf\n",i,area3);
    }
    return 0;
}
