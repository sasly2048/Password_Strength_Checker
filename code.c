#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int Strength_Check(char password[]) 
{
    int score = 0;
    int len = strlen(password);

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int special = 0;

    if (len >= 8) 
    {
        score++;
    }
    for (int i = 0; i < len; i++) 
    {
        if (isupper(password[i]) && !upper) 
        {
            score++;
            upper = 1; 
        } 
        else if (islower(password[i]) && !lower) 
        {
            score++;
            lower = 1; 
        } 
        else if (isdigit(password[i]) && !digit) 
        {
            score++;
            digit = 1; 
        }
        else if (!isalnum(password[i]) && !special) 
        {
            score++;
            special = 1; 
        }
    }
    
    return score;
}

int main() 
{
    printf("\n Password Strength Checker \n");
    printf("Conditions for a strong password:\n");
    printf("1. At least 8 characters\n");
    printf("2. At least 1 digit (0-9)\n");
    printf("3. At least 1 special character (!, @, #, etc.)\n");
    printf("4. At least 1 uppercase letter (A-Z)\n");
    printf("5. At least 1 lowercase letter (a-z)\n\n");

    char password[100];
    printf("Enter your password: ");
    scanf("%99s", password);

    int strength = Strength_Check(password);

    printf("\n Result: \n");
    
    switch (strength) 
    {
        case 0:
        case 1:
            printf("Password Strength: Very Weak\n");
            break;
        case 2:
            printf("Password Strength: Weak\n");
            break;
        case 3:
            printf("Password Strength: Moderate\n");
            break;
        case 4:
            printf("Password Strength: Strong\n");
            break;
        case 5:
            printf("Password Strength: Very Strong\n");
            break;
    }
    return 0;
}