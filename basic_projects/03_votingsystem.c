#include <stdio.h>

int main() {
    int age;
char registered, gender ;
int choice ;
printf("====VOTING ELIGIBILITY CHECKER====\n");

printf("Enter your age:");
scanf("%d",&age);
if (age<=0 || age>=120 ){
    printf("Invalid age entered. Please try again \n");
    return 1;
}
printf("Enter your gender(M/F/O):");
scanf(" %c", &gender);
if((gender != 'M') && (gender != 'F') && (gender != 'O'))
{printf("Invaid Gender entered \n");
    return 1;
}

if (age>=60) {printf("Your are a senior citizen. You can aply for special assistance \n");}
else if (age >=18) {printf("\n You are old enough to vote. Please proceed\n");}
else if (age>=16 && age>=18 ) {printf("\n you are a minor. You can pre- register but you cant't vote.\n");} 
else {printf("\n you are not eligible \n");
    return 0;
}

printf("Are you registered? ( Y for Yes, N for No): ");
scanf(" %c", &registered);

if (registered=='N'|| registered=='n' ){
    printf("\n please register\n");
    return 0;
}

else if ( registered == 'Y' || registered == 'y') {
    printf("Proceed");
   
}

else {
    printf("invalid");
    return 1;
}



printf("\n Do you know about your voting rights?\n ");
printf("1 for yes \n ");
printf("2 for no \n ");
printf("Enter choice : ");
scanf ("%d", &choice);

switch(choice){
    case 1:
    printf("Great! every vote matter . You should proceed to vote\n");
case 2:
printf("You should read about voting rights on official portal\n");

}
printf("====Form Completed=====\n");
return 0;}
