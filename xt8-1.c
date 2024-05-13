#include <stdio.h>

void splitfloat( float x, int *intpart, float *fracpart );

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);              //把返回值放在参数表里
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}

void splitfloat( float x, int *intpart, float *fracpart ){
    *intpart = (int)x;
    *fracpart = x - (*intpart);


}