#include<stdio.h>
 int main() {

 int a=1, number, sum=1;

 
 printf("enter the value : ");
	scanf("%d",&number);
 
 do{
  	
 	sum*=a;
 	
 	a++;
 	}while(a<=number);
	printf("%d",sum);


}


