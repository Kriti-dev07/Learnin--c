#include<stdio.h>
int main(){

 
int n;
printf("Enter number : ");
scanf("%d", &n);

int i=1;
while (i<=n){
    printf("%d\n", i);
    i++;

}
int x;
printf("Enter other number : ");
scanf("%d", &x);
int j=x;
do {
    printf("%d \n", j );
    j--;
}
while (j>=0);

     return 0  ; 
}
