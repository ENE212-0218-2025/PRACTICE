#include <stdio.h>


int main()
{   int correctpassword = 2122 ;
    int enteredpassword = 0;
    while(enteredpassword !=correctpassword){
    printf("Enter password");
    scanf("%d",&enteredpassword);
    if(enteredpassword==correctpassword){
      printf("Access Granted.\n");
    } else {printf("Access Denied\n");
    }
    }
    return 0;
}
