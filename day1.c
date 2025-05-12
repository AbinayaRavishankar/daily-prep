#include <stdio.h>

void main(){
    int a, b;
    char c,op;
    printf("Enter the first number a: ");
    scanf("%d",&a);
    printf("Enter the second number b: ");
    scanf("%d",&b);

    printf("The First number is %s\n", (a%2==0) ? "even"  : "odd");
    printf("The Second number is %s\n", (b%2==0) ? "even"  : "odd");

    printf("You want to perform any basic operations on a and b?(y/n)\n");
    scanf(" %c",&c);

    if(c=='y'){
        printf("Enter the operation you want to perform (+ - * /): ");
        scanf(" %c",&op);

        switch(op){
            case '+':
            printf("%d %c %d = %d",a,op,b,a+b);
            break;

            case '-':
            printf("%d %c %d = %d",a,op,b,a-b);
            break;

            case '*':
            printf("%d %c %d = %d",a,op,b,a*b);
            break;

            case '/':
            if(b!=0){
                printf("%d %c %d = %.5f",a,op,b,(float)a/b);
                break;
            }
            else{
                printf("Division by zero is not defined!");
                break;
            }

            default:
            printf("Please enter a valid operator and try again.");

        }
    }

    else{
        printf("Thank you for visiting!");
    }


}