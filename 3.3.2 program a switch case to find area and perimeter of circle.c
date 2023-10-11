
#include<stdio.h>
void main()
{
    int c;
    float radius, area, perimeter;
    printf("switch case in c program to calculate area of circle\\n perimeter of circle");
    printf("%f calculate the area of circle\n");
    printf("2 calculate the perimeter of a circle\n");
    printf("enter your choice(1 or 2)");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        printf("enter the raius of the circle");
        scanf("%f",radius);
        area=3.14*radius*radius;
        printf("the area of the circle %f\n", area);
        break;
        case2:
        printf("enter the radius of the circle");
        scanf("%f", &radius);
        perimeter=2*3.14*radius;
        printf("the perimeter of the circle %f\n" ,perimeter);
        break;
        default:
        printf("invalid choice\n");
        break;
    }
}