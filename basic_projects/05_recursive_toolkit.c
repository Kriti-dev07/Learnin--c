#include <stdio.h>

int factorial(int n);
int fibonacci(int n);
int power(int base, int exp);
int sum_digits(int n);
void swap(int *a, int*b);

void Show_Menu(){
printf("\n--- Recursive Math tool Kit\n");
printf("1. Factorial (recursion)\n");
printf("2. Fibonacci (recursion\n");
printf("3. Power (recursion)\n");
printf("4. Sum of digits (recursion)\n");
printf("5. Swap two numbers (recursion)\n");
printf("0.Exit\n");
printf("Enter your choice : ");

}
int main(){
    int choice;
    do
    {Show_Menu() ;  
        scanf("%d", &choice);
        int n,result,base, exp;
        int a,b;
        switch (choice){
        
   
        case 1:
        printf("Enter a number :");
        scanf("%d", &n);
        result = factorial(n);
        printf("Factorial if %d is %d \n", n, result);
            break;
        
            case 2:
printf("Enter number of terms:");
scanf("%d", &n);
printf("Fibonacci series : \n ");
for (int i=0;i<n;i++){
printf("%d", fibonacci(i));
printf("\n");
}
break;

case 3:
printf("Enter base and exponent");
scanf("%d %d",&base ,&exp );
result = power(base,exp);

printf("%d^%d =%d \n", base, exp, result);
break;
case 4:
printf("Enter a number:");
scanf("%d", &n);
result = sum_digits(n);
printf("Sum of Digits: %d \n", result);


case 5:
printf("Enter two numbers : ");
scanf("%d %d" , &a,&b);
swap(&a,&b);
printf("After swapping: a=%d, b=%d \n" ,a,b);
break;

case 0:
printf("Exiting Program. Thank You");
break;
        default:
        printf("Invalid choice");

            
        }
        
    } while (choice != 0);
    return 0;
}
//  recursive function to find factorial
    int factorial(int n){
        if (n==0)
        return 1;
        return n* factorial (n-1);
    }
    
// recursive function to find fibonacci
int fibonacci(int n){
    if (n<=1)
    return n;
    return fibonacci (n-1)+  fibonacci (n-2);

}
// Recursive function for power
int power(int base, int exp){
    if (exp==0)
    return 1;
    return base * power(base, exp - 1 );
}
// recursive function for sum of digits 
int sum_digits(int n){
    if (n==0)
    return 0;
    return(n % 10)+ sum_digits(n/10);

}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
