#include<stdio.h>
int main(){
    int number;
printf("Enter any number 1to 100 igive you how many odd number bettwen this number\n");
scanf("%d",&number);


printf("your odd value is\n");
while (number>=1)
{
  if(number %2 !=0){
  printf("%d\n",number);
  }

number--;

}

}