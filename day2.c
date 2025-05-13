#include <stdio.h>

int main()
{
    float mark;
    while(1){
           printf("Enter your marks: \n");
    scanf("%f",&mark);
    
    char c,grade;
    
    if(mark<0 || mark>100) printf("Enter a valid mark.\n");
    
    else{
    if (mark<=100 && mark>=90) grade = 'A';
    else if (mark>=80 && mark<90) grade = 'B';
    else if (mark>=70 && mark<80) grade = 'C';
    else if (mark>=60 && mark<70) grade = 'D';
    else if (mark>=50 && mark<60) grade = 'E';
    else grade = 'F';    
    printf("Your grade is %c\n",grade);
    }
    
    
    
    
    printf("Do you want to continue and check the grade for other marks?(y/n)\n");
    scanf(" %c",&c);
    if(c=='n'){
        printf("Thank you for visiting!");
        break;
    } 
     
    }

    return 0;
}