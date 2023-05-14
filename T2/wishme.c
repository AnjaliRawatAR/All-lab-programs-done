#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int hh,mm;
    scanf("%d %d",&hh,&mm);
    if ((hh>=4) && (hh<=11 && mm<=59)){
        printf("Good Morning");
    }else if ((hh>=12) && (hh<=15 && mm<=59)){
        printf("Good Afternoon");
    }else if((hh>=16) && (hh<=20 && mm<=59)){
        printf("Good Evening");
    }else {
        printf("Good Night");
    }
    return 0;
}