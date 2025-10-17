#include <stdio.h>

int main(){

    printf("Conditions to be followed: \n");
    printf("1.Password should have atleast 8 characters\n");
    printf("2.Password should have aleast 1 digit\n");
    printf("3.Password should have atleast 1 special character\n");

    char password[100];
    printf("Enter your password: ");
    scanf("%c", &password);
    return 0;
}