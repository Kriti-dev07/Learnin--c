#include<stdio.h>
int main(){
// this fis a marks calculator which calculates total, average, rounded and grades
    // declaring Variables
   
      int class=12;
        char section='B' ;


//Printing Info

printf("Student class:%d \n", class);
printf("Section: %c \n", section);

float Maths_marks;
printf("Enter Maths Marks (out of 100): \n" );
scanf("%f",&Maths_marks);

float Physics_marks;
printf("Enter Physics Marks (out of 100):\n");
scanf("%f",&Physics_marks);

// calculations
int Total_Marks;
Total_Marks = Physics_marks + Maths_marks;
printf("total Marks: %d \n", Total_Marks); //total

float Average_Marks;
Average_Marks= (Physics_marks+Maths_marks)/2;
printf("Average marks: %f \n", Average_Marks); //Average

int Rounded_average= (int)Average_Marks ; //conversion of float to int
printf("Rounded Average: %d \n", Rounded_average); //Average

// grades
char grade;
if(Average_Marks>=90){grade = 'A';}
else if (Average_Marks>=80  ) {grade = 'B';}
else if (Average_Marks>=60  ) {grade = 'C';}
else if (Average_Marks>=33) {grade = 'D';}
else  {grade = 'E';}

printf("Final Grades: %c \n", grade); //Grades
return 0  ; 
}
