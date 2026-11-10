#include <stdio.h>
#include <stdlib.h>

int main()
{   char username[50];
    printf("Hello\n");
    printf("please provide your name: ");
    scanf("%49s" , username);
    printf("hello %S\n", username);

    int correctpassword = 2122 ;
    int enteredpassword = 0 ;

    while(enteredpassword != correctpassword){
        printf("Enter password: ");
        scanf("%d" , &enteredpassword);

        if(enteredpassword == correctpassword){
            printf("Access Granted!\n");
         } else {
          printf("Access Denied!\n");
         }
         }
    return 0;
}
