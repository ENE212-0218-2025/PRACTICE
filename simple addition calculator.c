#include <stdio.h>
#include <stdlib.h>

int main()


{   double num1 , num2 , sum;
    int choice;


    //prompt user for the first number
    printf("Enter first number:");
    scanf("%lf" , &num1);

    //prompt user for second number
    printf("Enter second number:");
    scanf("%lf" , &num2);

    //calculate the sum
    sum= num1 + num2 ;

    //display results
    printf("The sum is: %.21f + %2.lf = %2.lf\n" , num1 , num2 , sum);

    //Ask user if they want to calculate again
    printf("\nDo you want to calculate another addition? (1 = Yes , 0 = Exit):");
    scanf("%d" , &choice);
    while (choice == 1);
    printf("Goodbye");
    return 0;
}
