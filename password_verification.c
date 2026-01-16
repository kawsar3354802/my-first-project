#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
 {
    int i;
    int hasUpper,hasLower,hasDigit;
    char user[25],password[25];
    hasUpper=hasLower=hasDigit=0;
    printf("what is your username: ");
    scanf("%s",&user);
    printf("please creat a password: ");
    scanf("%s",&password);
    for(i=0;i< strlen(password);i++)
    {
        if(isdigit(password[i]))
        {
            hasDigit =1;
            continue ;
        }
        if(isupper(password[i]))
        {
            hasUpper=1;
            continue;
        }
        if(islower(password[i]))
        {
            hasLower =1;

        }
    }
    if((hasDigit) && (hasUpper) && (hasLower))
    {
        printf("\n\nExcellent work, %s,\n,user");
        printf("Your password has upper and lower case ");
        printf("letters and a number.");
    }
    else 
    {
        printf("\n\nYou should consider a new password, %s,\n",user);
        printf("one that uses upper and lowercase letter");
        printf("and a number.");
    }
    return 0;

 }
