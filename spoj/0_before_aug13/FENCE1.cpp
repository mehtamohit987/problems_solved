#include<stdio.h>
#include<math.h>
#include<iomanip.h>
int main()
{
    float l;
    scanf("%f",&l);
    while(l!=0)
    {
        printf("%f\n",(l*l)/(4*acos(0)));
        printf("%.2lf\n",(l*l)/(4*acos(0)));
        scanf("%f",&l);

    }
}
