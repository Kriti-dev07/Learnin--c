#include<stdio.h>
void printwelcome() {
       printf("Welcome to my first c program with functions \n");       //funtion to print welcome
}
int add (int a, int b){           //funtion to add two number
       return a+b;
}
 
int subtract (int a,int b){
       return a-b;
}
int multiply(int a,int b){
       return a*b;
}

float divide (int a,int b){
       if (b==0)
       {
           printf("division by zero is not defined \n");
           return 1;
       }
        
       return (float) a/b;}
        // Ask for two numbers

int main() {
    char operator;
    printwelcome();

    int num1, num2;
    printf("Enter number 1: ");

    scanf("%d", &num1);

 printf("Enter number 2: ");

    scanf("%d", &num2);

printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    // Perform calculation based on operator
    switch (operator) {
        case '+':
           printf("Result=%d \n", add (num1, num2));
            break;
        case '-':
             printf("Result=%d \n", subtract (num1 ,num2 ));
            break;
        case '*':
           printf("Result=%d \n", multiply( num1 ,num2));
            break;
        case '/':
            printf("Result=%f \n", divide (num1 ,num2 ));
            break;
           
        default:
            printf("Invalid operator.\n");
           
    }
   return 0  ; 
}


































    
