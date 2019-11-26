#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float x)
{
  float y =x*x + 2*x - 2;
  return y;
}
float fun1(float x)
{
  float y =2*x + 2;
  return y;
}
void main()
{
  float ac,a=-1,b=0,f=1,x,x1,x2,c=987;
  printf("Enter accuracy: \n");
  scanf("%f",&ac);
  while(f>0.0)
  {
    a++;
    b++;
    f= fun(a)*fun(b);
  }
  x=a;
  do
  {
    x1 = x;
    x = x - (fun(x)/fun1(x));
    printf("X: %f\n",x);
  }
  while((x1-x)>ac || (x1-x)<0);
  printf("Root : %f\n",x);
  getch();
}