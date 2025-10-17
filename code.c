#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Strength_Check(char password[]){
    int i=0;
    if (strlen(password) >=8)
        i++;
    for(int j =0 ; j < strlen(password); j++)
    {
        if((password[j] >= 'A')&& (password[j] <='Z'))
            i++;
            break;
    }
    for(int j =0 ; j < strlen(password); j++)
    {
        if((password[j] >= '0')&& (password[j] <='9'))
            i++;
            break;
    }
    for(int j =0 ; j < strlen(password); j++)
    {
        if((password[j] >= 'a')&& (password[j] <='z'))
            continue;
    }
    return i;
}

int main(){

    printf("\nConditions to be followed: \n");
    printf("    1.Password should have atleast 8 characters\n");
    printf("    2.Password should have aleast 1 digit\n");
    printf("    3.Password should have atleast 1 special character\n\n");

    char password[100];
    printf("Enter your password: ");
    scanf("%s", password);

    Strength_Check(password);

    switch(Strength_Check(password)){
        case 0 : printf("Password Strength: Bad");break;
        case 1 : printf("Password Strength: Easy");break;
        case 2 : printf("Password Strength: Moderate");break;
        case 3 : printf("Password Strength: Good");break;
        case 4 : printf("Password Strength: Strong");break;
        default : printf("INVALID PASSWORD");
    }
    return 0;
}