#include<stdio.h>
int main()

{
	
	int a=1,number;
	
	
	printf("enter the valu : ");
	scanf("%d",&number);
	
	do{
	
	printf("%d x %d = %d\n",number,a,number*a);
	a++;
		
	}while(a<=10); 
		
	}
