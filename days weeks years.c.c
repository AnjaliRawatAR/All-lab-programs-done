//to convert no of days to weeks and year

#include <stdio.h>
void main()
{
    int day, year, week;
    printf("Enter the no of days:\n");
    scanf ("%d", &day);
    printf ("No. of days:%d\n", day);
    week=day/7;
    printf ("To no. of weeks:%d\n",week);
    year=day/365;
    printf("To no. of years:%d\n", year);
}