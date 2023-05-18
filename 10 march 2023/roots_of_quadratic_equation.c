#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    float r1,r2,imag;
    float d;
    printf("Enter the values of a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    printf("\n The equation is as follows :%.fx^2+(%.f)x+(%.f)",a,b,c);
    d=(b*b)-(4*a*c);
    switch(d>0){
        case 1:
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("The roots are real and are %0.2f and %0.2f",r1,r2);
            break;
        }
        case 0:
        {
            switch(d<0){
                case 1:
                {
                    r1=r2=-b/(2*a);
                    imag=sqrt(-d)/(2*a);
                    printf("The roots are imaginary and are %0.2f + i%0.2f and %0.2f + i%0.2f",r1,imag,r2,imag);
                    break;
                }
                case 0:
                {
                    r1=r2= -b/(2*a);
                    printf("The roots are real and equal and are %0.2f and %0.2f",r1,r2);
                    break;
                }
            }
            break;

        }
    }
    return 0;
}