#include <stdio.h>
#include <stdbool.h>
int main()
{
    int choices;
    printf("\n\tWelcome to My Calculator App\n");
    bool loop;
    do
    {
        printf("\nWhich type of operation you want to perform\n");
        printf("\nMenu : \n");
        printf("\n1. For Addition\n");
        printf("2. For Subtraction\n");
        printf("3. For Multiplication\n");
        printf("4. For Division\n");
        printf("\nEnter your Choice (1-4) : ");
        scanf("%d", &choices);
        int num1;
        int num2;
        /* code */

        switch (choices)
        {
        case 1:
            printf("You choose Addition\n");
            printf("Enter the First Number : ");
            scanf("%d", &num1);
            printf("Enter the Second Number : ");
            scanf("%d", &num2);
            printf("The result is %d\n", num1 + num2);
            break;

        case 2:
            printf("You choose Subtraction\n");
            printf("Enter the First Number : ");
            scanf("%d", &num1);
            printf("Enter the Second Number : ");
            scanf("%d", &num2);
            printf("The result is %d\n", num1 - num2);
            break;
        case 3:
            printf("You choose Multiplication\n");
            printf("Enter the First Number : ");
            scanf("%d", &num1);
            printf("Enter the Second Number : ");
            scanf("%d", &num2);
            printf("The result is %d\n", num1 * num2);
            break;
        case 4:
            printf("You choose Division\n");
            printf("Enter the First Number : ");
            scanf("%d", &num1);
            printf("Enter the Second Number : ");
            scanf("%d", &num2);
            printf("The result is %d\n", num1 / num2);
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }
        char ask;
        printf("Do you want to Use more press 'y' for yes and press 'n' : ");
        scanf(" %c", &ask);
        if (ask == 'y')

        {
            loop = true;
        }
        else if(ask == 'n')
        {
            loop = false;
            printf("Thanks for Using My calculator");
        }
        else
        {
            printf("Invalid input. Exiting the application.\n");
            loop = false; // Exit the loop on invalid input
        }
    } while (loop);
    printf("\n\tMade by Huzaifa");
    return 0;
}

// ! New Code ----------------------------

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     int choices;
//     bool loop = true; // Initialize loop to true for the first run

//     printf("\n\tWelcome to My Calculator App\n");

//     do
//     {
//         // Display the menu to the user
//         printf("\nWhich type of operation do you want to perform?\n");
//         printf("\nMenu:\n");
//         printf("1. For Addition\n");
//         printf("2. For Subtraction\n");
//         printf("3. For Multiplication\n");
//         printf("4. For Division\n");
//         printf("\nEnter your choice (1-4): ");
//         scanf("%d", &choices);

//         int num1, num2; // Declare variables to store user inputs

//         switch (choices)
//         {
//         case 1:
//             printf("You chose Addition\n");
//             printf("Enter the first number: ");
//             scanf("%d", &num1);
//             printf("Enter the second number: ");
//             scanf("%d", &num2);
//             printf("The result is %d\n", num1 + num2);
//             break;

//         case 2:
//             printf("You chose Subtraction\n");
//             printf("Enter the first number: ");
//             scanf("%d", &num1);
//             printf("Enter the second number: ");
//             scanf("%d", &num2);
//             printf("The result is %d\n", num1 - num2);
//             break;

//         case 3:
//             printf("You chose Multiplication\n");
//             printf("Enter the first number: ");
//             scanf("%d", &num1);
//             printf("Enter the second number: ");
//             scanf("%d", &num2);
//             printf("The result is %d\n", num1 * num2);
//             break;

//         case 4:
//             printf("You chose Division\n");
//             printf("Enter the first number: ");
//             scanf("%d", &num1);
//             printf("Enter the second number: ");
//             scanf("%d", &num2);

//             // Check for division by zero
//             if (num2 == 0)
//             {
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             else
//             {
//                 printf("The result is %.2f\n", (float)num1 / num2);
//             }
//             break;

//         default:
//             printf("Invalid Choice. Please enter a number between 1 and 4.\n");
//             break;
//         }

//         char ask;
//         printf("Do you want to use more? Press 'y' for yes and 'n' for no: ");

//         // Use " %c" to ignore any leftover newline characters
//         scanf(" %c", &ask);

//         if (ask == 'y')
//         {
//             loop = true; // Continue the loop
//         }
//         else if (ask == 'n')
//         {
//             loop = false; // Exit the loop
//         }
//         else
//         {
//             printf("Invalid input. Exiting the application.\n");
//             loop = false; // Exit the loop on invalid input
//         }

//     } while (loop);

//     printf("Thank you for using the calculator. Goodbye!\n");

//     return 0;
// }
