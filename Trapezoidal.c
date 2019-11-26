#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(1/(1+pow(x,2)));
}
void main()
{
	int i, n;
	float x0, xn, h, y[20], x[20], s0, se, ans;
	printf("\n Enter values of x0, xn, n:\n");
	scanf("%f %f %d",&x0, &xn, &n);
	h=(xn-x0)/n;
	printf("\n h is:  %f \n",h);
	printf("\n Y values \n");
	for (i=0;i<=n;i++)
	{
		x[i]=x0+i*h;
		y[i]=f(x[i]);
		printf("\n %f \n",y[i]);
}
s0=0;
se=0;
	for (i=1;i<n;i++)
	{
		if(i%2==1)
		{
			s0=s0+y[i];
		}
		else
		{
			se=se+y[i];
		}
	}
	ans=h/3*(y[0]+y[n]+4*s0+2*se);
	printf("\n Final integration is %f",ans);
	getch();
}