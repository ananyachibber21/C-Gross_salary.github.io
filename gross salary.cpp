#include<stdio.h>
#include<math.h>

int main()
{
	int sal;
	float dearness,rent,tot,gross;
	printf("Enter your salary: ");
	scanf("%d",&sal);
	dearness=(40*sal)/100;
	rent=(20*sal)/100;
	tot=dearness+rent;
	gross=sal-tot;
	printf("%d %f",sal,gross);
	return 0;
}
