#include <stdio.h>


int main()
{   int score = -1;
    while(score<0 || score>100){
     printf("Enter score(0-100): ");
     scanf("%d" ,&score);
     if(score<0||score>100){
     printf("Invalidscore Tryagain.\n");
     }
    }
    if(score>=70){
    printf("Grade:A\n");
    } else if(score>=60){
    printf("Grade:B\n");
    } else if(score>=50){
    printf("Grade:C\n");
    } else if(score>=40){
    printf("Grade:D\n");
    } else if(score<=39){
    printf("Grade:E\n");
    }
    return 0;
}
