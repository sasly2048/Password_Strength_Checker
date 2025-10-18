#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void Strength_Check(char password[]){
    int i=0;

    if (strlen(password)>=8)
        i++;
    
    for(int j =0 ; j < strlen(password); j++)
    {
        if(password[j] >= 'A' && password[j] <='Z'){
            i++;
            break;}
    }
    for(int j =0 ; j < strlen(password); j++)
    {
        if(password[j] >= '0'&& password[j] <='9'){
            i++;
            break;}
    }
    for(int j =0 ; j < strlen(password); j++)
    {
        if(password[j] >= 'a' && password[j] <='z'){
            i++;
            break;}
    }
    for(int j =0; j < strlen(password); j++){
        if(!(password[j] >= 'A' && password[j] <='Z')){
            if(!(password[j] >= 'a' && password[j] <='z')){
                if(!(password[j] >= '0' && password[j] <='9')){
                    i++;
                    break;
                }
            }
        }
    }
    switch(i){
        case 1 : printf("Password Strength: Very Weak\n");break;
        case 2 : printf("Password Strength: Weak\n");break;
        case 3 : printf("Password Strength: Moderate\n");break;
        case 4 : printf("Password Strength: Strong\n");break;
        case 5 : printf("Password Strength: Very Strong\n");break;
        default : printf("INVALID PASSWORD\n");
    }
}

void Condition_Check(char password[]){
    int n = 0;
    int k = 0;

    
    for(int j =0; j < strlen(password); j++){
        if(password[j] >= 'A' && password[j] <='Z'){
            k +=1;
            break;
        }
    }
    for(int j =0; j < strlen(password); j++){
        if(password[j] >= 'a' && password[j] <='z'){
            k+=2;
            break;
        }
    }
    for(int j =0; j < strlen(password); j++){
        if(password[j] >= '0' && password[j] <='9'){
            k+=4;
            break;
        }
    }
    for(int j =0; j < strlen(password); j++){
        if(!(password[j] >= 'A' && password[j] <='Z')){
            if(!(password[j] >= 'a' && password[j] <='z')){
                if(!(password[j] >= '0' && password[j] <='9')){
                    k+=8;
                    break;
                }
            }
        }
    }
    switch(k){
        case 0: printf("Password should have atleast 1 Uppercase\n");printf("Password should have atleast 1 Digit\n");printf("Password should have atleast 1 Digit\n");printf("Password should have atleast 1 Special Character\n");break;
        case 1: printf("Password should have atleast 1 Lowercase\n");printf("Password should have atleast 1 Digit\n");printf("Password should have atleast 1 Special Character\n");break;
        case 2: printf("Password should have atleast 1 Uppercase\n");printf("Password should have atleast 1 Digit\n");printf("Password should have atleast 1 Special Character\n");break;
        case 3: printf("Password should have atleast 1 Digit\n");printf("Password should have atleast 1 Special Character\n");break;
        case 4: printf("Password should have atleast 1 Uppercase\n");printf("Password should have atleast 1 Lowercase\n");printf("Password should have atleast 1 Special Character\n");break;
        case 5: printf("Password should have atleast 1 Lowercase\n");printf("Password should have atleast 1 Special Character\n");break;
        case 6: printf("Password should have atleast 1 Uppercase\n");printf("Password should have atleast 1 Special Character\n");break;
        case 7: printf("Password should hve atleast 1 Specail Character\n");break;
        case 8: printf("Password should have atleast 1 Uppercase\n");printf("Password should have atleast 1 Digit\n");printf("Password should have atleast 1 Digit\n");break;
        case 9: printf("Password should have atleast 1 Lowercase\n");printf("Password should have atleast 1 Digit\n");break;
        case 10: printf("Password should have atleast 1 Uppercase\n");printf("Password should have atleast 1 Digit\n");break;
        case 11: printf("Password should have atleast 1 Digit\n");break;
        case 12: printf("Password should have atleast 1 Uppercase\n");printf("Password should have atleast 1 Lowercase\n");break;
        case 13: printf("Password should have atleast 1 Lowercase\n");break;
        case 14: printf("Password should have atleast 1 Uppercase\n");break;
        case 15: printf("Conditions Satisfied\n");break;
        default: printf("INVALID INPUT\n");
    }
}

void Generator(){
    int length;
    printf("Length: ");
    scanf("%d", &length);
    char password[length];
    srand(time(NULL));


    char digits[] = "0123456789";
    int length_digits = strlen(digits);

    char uppercase[] = "ASDFGHJKLQWERTYUIOPZXCVBNM";
    int upper_length = strlen(uppercase);

    char lowercase[] = "asdfghjklqwertyuiopzxcvbnm";
    int lowercase_length = strlen(lowercase);

    char symboles[] = "!@#$^&%*?~()";
    int length_symboles = strlen(symboles);

    for (int i=0; i<length; i++){
        int char_random = rand()%4;
        if(char_random==0)
            password[i] = digits[rand() % length_digits];
        else if(char_random==1)
            password[i] = uppercase[rand() % upper_length];
        else if(char_random==2)
            password[i] = lowercase[rand() % lowercase_length];
        else
            password[i] = symboles[rand() % length_symboles];
    }
    printf("Password: %s\n", password);
    Strength_Check(password);
}

int main(){
    int i;
    char password[100];

    printf("Select from the following:\n");
    printf("    1.Generate a Random Password & Check it's Strength\n");
    printf("    2.Check the Strength of the Password\n");
    printf("\n");
    printf("Enter your option: ");
    scanf("%d", &i);

    if(i == 1){
        Generator();
    }

    else if(i==2){
        printf("\nConditions to be followed: \n");
        printf("    1.Password should have atleast 8 characters\n");
        printf("    2.Password should have aleast 1 digit\n");
        printf("    3.Password should have atleast 1 special character\n");
        printf("    4.Password should have atleast 1 Uppercase\n");
        printf("    3.Password should have atleast 1 Lowercase\n");

        do{ 
            printf("================================================================\n");
            printf("Enter your password: ");
            scanf("%99s", password);
            printf("\n");
            printf("================================================================\n");

            Condition_Check(password);
            if(strlen(password)<8)
                printf("\nEnter aleast 8 characters\n");
        }while(strlen(password)<8);

        Strength_Check(password);
    }
    else{
        printf("INVALID INPUT\n");
    }
    printf("-----------------------------END-----------------------------");
    return 0;
}