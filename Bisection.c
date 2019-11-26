#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float x)
{
  float y =x*x*x - 4*x - 9;
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
  while((b-a)>ac)
  {
    c = (b+a)/2;
    x1= fun(a);
    x2= fun(c);
    printf("C: %f\n",c);
    if((x1*x2)>0.0)
    a=c;
    else
    b=c;
  }
  printf("Root : %f\n",c);
  getch();
}