//to calculate the total marks, average score and percentage obtained
#include <stdio.h>

void main ()
{
    float x, y, z, m,n , tot, av, percent;
    printf("Enter the numbers:\n");
    scanf ("%f%f%f%f%f", &x, &y, &z, &m, &n);
    printf ("Marks of first subject:%0.3f", x);
    printf ("\nMarks of second subject:%0.3f",y);
    printf ("\nMarks of third subject:%0.3f",z);
    printf ("\nMarks of fourth subject:%0.3f",m);
    printf ("\nMarks of fifth subject:%0.3f",n);
    tot=x+y+z+m+n;
    printf ("\nThe Total Marks is:%0.3f",tot);
    av=tot/5;
    printf ("\nThe Average Marks is:%0.3f",av);
    percent=(tot/500)*100;
    printf ("\nThe Percentage obtained:%0.3f",percent);
}
