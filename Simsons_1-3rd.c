#include<stdio.h>
#include<conio.h>
#include<math.h>
float f (float x)
{
    return(x+(1/x));
}
void main ()
{
    int n,i;
    float s1=0,s2=0,sum,a,b,h,sn;
    printf("enter the value of upper limit\n");
    scanf("%f",&b);
    printf("enter the value of lower limit\n");
    scanf("%f",&a);
    printf("enter the nmber of intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    printf("the value of h: %f\n",h);
    if(n%2==0)
    {
        printf("y0:  %f\n",f(a));
        for(i=1;i<n;i++)
        {
            if(i%2==0)
            {   
                sn=f(a+(i*h));
                s1=s1+sn;
                printf("y%d:  %f\n",i+1,sn);
            }
            else
            {
                sn=f(a+(i*h));
                s2=s2+sn;
                printf("y%d: %f\n",i+1,sn);
            } 
        
        }
            printf("y%d:  %f\n",n,f(b));
            sum= h/3*(f(a)+f(b)+4*s2+2*s1);
            printf("%d the value is =%f",i,sum);
    }
    else
    {
        printf("the rule is not applcable");
    }
        getch() ;
}