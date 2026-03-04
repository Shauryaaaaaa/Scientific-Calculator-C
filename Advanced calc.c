#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{

    double num_1, num_2;
    int calc;
    double sum, prod, div, sub;
    char ope_1[20], ope_2[5];
    char again = 'Y';

    do{
        printf("Would you like to use the advanced calculator (Press 1) or basic calculator (Press 2) : ");
        scanf("%d", &calc);

        if (calc == 1)
        {
            printf("List of operators : ");
            printf("+, -, /, *, root, log, power, percent.");

            printf("\nSelect an operator : ");
            scanf("%s", ope_1);

            if (strcmp(ope_1, "+") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", num_1 + num_2);
            }
            else if (strcmp(ope_1, "root") == 0)
            {
                printf("Enter the number : ");
                scanf("%lf", &num_1);
                printf("Enter the root degree (e.g., 2 for square root): ");
                scanf("%lf", &num_2);

                if (num_2 != 0)
                {
                    printf("Answer = %0.3lf", pow(num_1, 1.0 / num_2));
                }
                else
                {
                    printf("Error: Cannot take the 0th root.");
                }
            }
            else if (strcmp(ope_1, "log") == 0)
            {
                printf("Enter number for log10: ");
                scanf("%lf", &num_1);
                printf("Answer = %0.3lf", log10(num_1));
            }
            else if (strcmp(ope_1, "-") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", num_1 - num_2);
            }
            else if (strcmp(ope_1, "/") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                if (num_2 == 0)
                {
                    printf("Division by 0 not possible.");
                }
                else
                {
                    printf("Answer = %0.3lf", num_1 / num_2);
                }
            }
            else if (strcmp(ope_1, "*") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", num_1 * num_2);
            }
            else if (strcmp(ope_1, "power") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter the root degree (e.g., 2 for square): ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", pow(num_1, num_2));
            }
            else if (strcmp(ope_1, "percent") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter the percentage : ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", (num_1 * num_2) / 100);
            }
            else
            {
                printf("Operator not recognized.");
            }
        }
        else if (calc == 2)
        {
            printf("List of operators : ");
            printf("+, -, /, *");

            printf("\nSelect an operator : ");
            scanf("%s", ope_2);

            if (strcmp(ope_2, "+") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", num_1 + num_2);
            }
            else if (strcmp(ope_2, "-") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", num_1 - num_2);
            }
            else if (strcmp(ope_2, "*") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                printf("Answer = %0.3lf", num_1 * num_2);
            }
            else if (strcmp(ope_2, "/") == 0)
            {
                printf("Enter first number : ");
                scanf("%lf", &num_1);
                printf("Enter second number : ");
                scanf("%lf", &num_2);
                if (num_2 == 0)
                {
                    printf("Division by 0 not possible.");
                }
                else
                {
                    printf("Answer = %0.3lf", num_1 / num_2);
                }
            }
            else
            {
                printf("Operator not recognized.");
            }
        }
        else
            printf("Please Select a calculator by pressing only 1 or 2!!\n");

    printf("\n\nDo you want to perform another calculation? (Y/N): ");
    scanf(" %c", &again);
        
    } while (again == 'Y');
    return 0;
}