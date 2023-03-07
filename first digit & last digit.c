#include<stdio.h>
main() {


 int number, first_digit, last_digit, sum;
 
          printf("enter the value : ");
          scanf("%d",&number);
 
     last_digit = number % 10;
 
      while(number>10) {
	number = number/10;
}
    first_digit = number;
    sum = first_digit + last_digit;
      
	   printf("%d",sum);

}

