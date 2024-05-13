#include <stdio.h>
#include <math.h>
int main(void){


    struct vector{
        double x;
        double y;
    } vec1,vec2,vec3;
    vec3.x=0;
    vec3.y=0;

    scanf("%lf %lf",&vec1.x,&vec1.y);
    scanf("%lf %lf",&vec2.x,&vec2.y);

    vec3.x=vec1.x+vec2.x;
    vec3.y=vec1.y+vec2.y;

    if(fabs(vec3.x)<0.05 ){
        vec3.x=0;
    }
    if(fabs(vec3.y)<0.05 ){
        vec3.y=0;
    }

    printf("(%.1lf, %.1lf)",vec3.x,vec3.y);

    return 0;
}
//0 0 -0.04 -0.04
//(-0.0, -0.0)
//一开始过不了以上测试数据， 因为题目要求保留1位小数，此时有可能出现非法输出-0.0