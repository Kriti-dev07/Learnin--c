#include <stdio.h>
int sum(int n);
int factorial(int n);
int main(){

    printf ("sum is :%d\n", sum(5) );

printf ("factorial is : %d", factorial(4));


    return 0;
}
int sum(int n){ 
    if (n==1)
    {
   return 1;
    }
    
    int sumx=sum(n-1);
    int sum = sumx+n;
}

int factorial(int n){
    if (n==0)
    {
   return 1;
    }
    
    int factorialx= factorial(n-1);
    int factorial= factorialx * n;
    return factorial ;
}