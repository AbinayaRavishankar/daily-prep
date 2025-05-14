#include <stdio.h>

void main(){
    float money, amount = 10000.00;
    int choice;
    char ch;
    
    printf("***************************\n");
    printf("Welcome to ABC Bank!\n");
    printf("***************************\n\n\n");
    
    printf("What do you want to do today?\n");
    while(1){
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nEnter your choice(1/2/3/4): ");
        scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("Balance Enquiry\n");
        printf("Your Current Account balance is %.2f\n",amount);
        break;
        
        case 2:
        printf("Money Deposit\n");
        printf("Enter the amount you want to deposit: ");
        scanf("%f",&money);
        if (money >0) {
        amount += money;
        printf("Your Current Account balance after the deposit is %.2f\n",amount);
        }
        else printf("Invalid amount entered!");
        break;
        
        case 3:
        printf("Money Withdrawal\n");
        printf("Enter the amount you want to withdraw: ");
        scanf("%f",&money);
        if (money > 0 && amount >= money) {
            amount -= money;
        printf("Your Current Account balance after the Withdrawal is %.2f\n",amount);
        }
        else if (money<0)printf("Invalid amount entered!");
        else if (amount < money) printf("Insufficient balance!");
        break;
        
        case 4:
        printf("Thank you!");
        break;
        
        default:
        printf("Please enter a valid transaction number from the list.");
        
    }
    printf("\nDo you want to continue?(y/n)\n");
    scanf(" %c",&ch);
    
    if(ch=='n'){
        printf("Thank you for banking with us.");
        break;
    }
    }
    
    
}