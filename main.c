/*
example output

Tuesday, April 2

zoho ticket 234432 - 6h 32m
OP-3694 0h 22m

---TOTAL---
7h 4m
*/
#include <stdio.h>
#include "TimeFunctions.h"

int main() {

    int hours, mins;
    char inputName[30];
    
    printf("What is the name of the task you're logging time for? \n");
    scanf("%s", inputName);

    printf("How many hours did you work? \n");
    scanf("%d", &hours);


    printf("Minutes? \n");
    scanf("%d", &mins);

    if (mins > 60){
        hours++;
        mins = mins % 60;
    }

    printf("You worked on %s total is %d hours and %d mins.", inputName, hours, mins);

    return 0;
} 