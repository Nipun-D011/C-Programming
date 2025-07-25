#include <stdio.h>
 
double add(double num1, double num2)
{
    return num1 + num2;
}
 
double sub(double num1, double num2)
{
    return num1 - num2;
}
 
double multiply(double num1, double num2)
{
    return num1 * num2;
}
 
double divide(double num1, double num2)
{
    return num1 / num2;
}
 
 
int main()
{
 
    char option;
    double num1, num2, result;
 
    do{
        printf("Enter you choice (+, -, *, /) to exit press x : ");
        scanf(" %c", &option);
 
        if (option == 'x') {
            printf("\n\n------------- Program Ended -------------\n\n");
            break;
        }
 
        printf("Enter first numbers: ");
        scanf("%lf", &num1);
 
        printf("Enter second numbers: ");
        scanf("%lf", &num2);
 
 
        switch (option){
 
            case '+':
                result = add(num1, num2);
                printf("\n\nResult: %.2lf\n\n", result);
                break;
 
            case '-':
                result = sub(num1, num2);
                printf("\n\nResult: %.2lf\n\n", result);
                break;
 
            case '*':
                result = multiply(num1, num2);
                printf("\n\nResult: %.2lf\n\n", result);
                break;
 
            case '/':
                result = divide(num1, num2);
                printf("\n\nResult: %.2lf\n\n", result);
 
                break;
 
            default:
                printf("Error: Invalid option.\n\n");
                break;
        }
 
    } while (1);
   
    return 0;
}