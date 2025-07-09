#include <stdio.h>

int main() {
float num;
int range,choice;
printf("Enter number you want the table of : "); //number
scanf("%f", &num);

printf("Enter how far you want the table : ");
scanf("%d", &range );                                 //range

printf("choose an option: \n");
printf("1. display table in normal order \n");

printf("2. display table in reverse order \n");

printf("ENter your choice :" );
scanf("%d", &choice );

switch (choice)
{
case 1:
   printf("Multiplication table of %f upto %d \n" , num, range);


for (int i=1; i<=range; i++)
{printf ("%f * %d = %f \n", num, i, num*i);}

break;
case 2:
  { printf("Multiplication table of %f upto %d \n" , num, range);}
break;

for (int i=range; i>=1; i--)
{printf ("%f * %d = %f \n", num, i, num*i);}
break;

default:
{printf ("Invaid. Run again");}
   
    break;
}


printf ("\n \n===completed===");


    
 return 0;}
