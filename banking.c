//  ATM C Assignment for practice

#include <stdio.h>
#include <stdlib.h>

int pin = 1234;
int user_pin;
int correct_pin, menu_choice , incorrect_pin ,n= 0;

int main(void)
{
    do
    {
        printf("\n********Welcome to ATM Service**************\n");
        printf("Please choose from the options below:\n");
        printf(" 1. Enter Pin \n 2. Change Pin \n 3. Times PIN entered \n 4. Exit \n");
        scanf("%d", &menu_choice);
        printf("*********************************************\n\n");
        switch (menu_choice)
        {
        case 1:
            printf("Please Enter your pin: ");
            scanf("%d", &user_pin);
            if (pin == user_pin)
            {
                printf("Correct Pin\n");
                correct_pin++;
            }
            else
            {
                while (pin != user_pin)
                {
                    printf("Please Enter your pin: ");
                    incorrect_pin++;
                    scanf("%d", &user_pin);
                }
            }
            break;
        case 2:
            printf("Changing PIN\n");
            break;
        case 3:
            printf("Your pin has been inputted correctly: %d ", correct_pin);
            printf("\nYour pin has been inputted incorrectly: %d", incorrect_pin);
            break;
        case 4:
            printf("Exiting the ATM...");
            n=1;
            break;
        default:
            printf("ERROR");
            break;
        }
        fflush(stdin);
    } while (n==1);
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}


