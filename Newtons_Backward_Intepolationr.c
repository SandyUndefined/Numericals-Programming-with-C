#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	float x[20], y[20], f, s, h, d, p;
int i, j, n, k;	
printf("\n Enter the value of n:");
scanf("%d",&n);
printf("\n Enter the elements of x:");
for (i=1;i<=n;i++)
{
		scanf("%f",&x[i]);
}
printf("\n Enter the elements of y:");
for (i=1;i<=n;i++)
{
		scanf("%f",&y[i]);
}
h=x[2]-x[1];
printf("\n Enter the value of f:");
scanf("%f",&f);
s=(f-x[n])/h;
p=1;
d=y[n];
for (i=n,k=1;i>=1,k<n;i--,k++)
{
		for (j=n;j>=1;j--)
		{	
			y[j]=y[j]-y[j-1];
		}
		p=p*(s+k-1)/k;
		d=d+p*y[n];
}
printf("\n For f = %f, ans is =%f" ,f,d);
getch();
}