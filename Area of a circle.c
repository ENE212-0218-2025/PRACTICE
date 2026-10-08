#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\n");

    char username [50];
    printf("please provide your name");
    scanf("%s" ,username);
    printf("hello%s!\n\n", username);

    //variable declaration
    double area;
    double Pi = 3.142;
    double r;
    //capture input from the user
    printf("please provide radius: ");
    scanf("%lf" ,&r);
    area=Pi*r*r;
    printf("area=Pi*r*r");
    printf("Area= %lf\n" ,area);
    return 0;


}
