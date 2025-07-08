  #include<stdio.h>
int main(){
int number1, number2;
  printf("enter number 1:");
  scanf("%d", &number1);
   
  printf("enter number 2:");
  scanf("%d",&number2);

 
  //addition 
  printf("Addition: %d +%d=%d \n", number1,number2,number1+number2);

  
  //Integer modulo
  printf("Modulo: %d %% %d= %d\n", number1,number2,number1 % number2 );
 
//float 
  float num1, num2;
  printf("enter number 1:");
  scanf("%f", &num1);

  printf("enter number 2:");
  scanf("%f",&num2);


 //multiplication 
printf("Multiplication: %f*%f=%f \n", num1,num2,num1*num2);
 
//subtraction
printf("subtraction: %f-%f=%f \n", num1,num2,num1-num2);
return 0  ; 
}
