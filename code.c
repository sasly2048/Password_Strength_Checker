#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Strength_Check(char password[]) 
{
    int i=0;

    if (strlen(password) >= 8)
        i++;
    
    for(int j = 0 ; j < strlen(password); j++)
    {
        if( (password[j] >= 'A') && (password[j] <= 'Z') )
            i++;
            break;
    }
    for(int j = 0 ; j < strlen(password); j++)
    {
        if( (password[j] >= '0') && (password[j] <='9') )
            i++;
            break;
    }
    for(int j = 0 ; j < strlen(password); j++)
    {
        if( (password[j] >= 'a') && (password[j] <='z') )
            i++;
            break;
    }
    for(int j = 0 ; j < strlen(password); j++)
    {
        if(!( ( (islower(password[j]) >= 'a')&& (islower(password[j]) <='z') ) || ( (password[j] >= '0')&& (password[j] <='9') ) )  )
            i++;
            break;
    }
    return i;
}

int main()
{

    printf("\nConditions to be followed: \n");
    printf("1.Password should have atleast 8 Characters\n");
    printf("2.Password should have aleast 1 Digit\n");
    printf("3.Password should have atleast 1 Special Character\n");
    printf("4.Password should have atleast 1 One Capital Letter\n\n");


    char password[100];
    printf("Enter your password: ");
    scanf("%s", password);

    Strength_Check(password);

    switch(Strength_Check(password))
    {
        case 1 : printf("Password Strength: Very Weak");
        break;
        case 2 : printf("Password Strength: Weak");
        break;
        case 3 : printf("Password Strength: Moderate");
        break;
        case 4 : printf("Password Strength: Strong");
        break;
        case 5 : printf("Password Strength: Very Strong");
        break;
        default : printf("INVALID PASSWORD");
    }
    return 0;
}
