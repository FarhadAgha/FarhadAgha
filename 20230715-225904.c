#include<stdio.h>
int prime(int a);  
int main()
{
	int num,one;
	printf("Enter the number to check\n");
	scanf("%d",&num);
	if(num>2&&num<100)
	prime(num);
	else 
	{
	
		num=0;
			 printf("\n Out of range press 1 to try again\n");
			 
		scanf("%d",&num);}
			if(num==1){
			num=0;
			
	printf("\nPlease do input number between 2-100\n");
	scanf("%d",&num);}
	if(num>2&&num<100)
	prime(num);


else printf("restart the program");

			
	
	return 0;	
}
int prime(int num)
{
	int i,flag=0;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	
	
	if(flag==1)
	printf("The function is prime");

	else
	printf("The number is not prime ");

}