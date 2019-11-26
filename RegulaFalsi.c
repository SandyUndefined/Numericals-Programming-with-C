#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float x)
{
  float y =x*x*x - 2*x - 5;
  return y;
}
void main()
{
  float ac,a=-1,b=0,f=1,x,x1,x2,c=987,xn,xn1;
  printf("Enter accuracy: \n");
  scanf("%f",&ac);
  while(f>0.0)
  {
    a++;
    b++;
    f= fun(a)*fun(b);
  }
  printf("a=%f,,b=%f",a,b);
  if(fun(a)>0)
  {
    a =a+b;
    b =a-b;
    a =a-b;
  } 
  do
  {
    x1= fun(a);
    x2= fun(b);
    xn1 = xn;
    xn =b - ((x2/(x2-x1))*(b-a));
    printf("Xn+1: %f\n",xn);
    if(fun(xn)<0.0)
    a=xn;
    else
    b=xn;
  }
  while((xn1-xn)>ac || (xn1-xn)<0);
  printf("Root : %f\n",xn);
  getch();
}
