#include<stdio.h>
int main(){
int first_year;
int last_year;

printf("Enter your fist year");
scanf("%d",&first_year);


printf("Enter your second year");
scanf("%d",&last_year);
while (first_year <= last_year)
{
  if(first_year % 4 ==0 && first_year % 100 !=0 || first_year % 400 ==0) {
    printf("%d\n",first_year);
  }
  first_year++;
}






}