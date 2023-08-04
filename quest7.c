//Write a program to calculate the difference between two time periods.


#include <stdio.h>
struct time {
   int sec;
   int min;
   int hrs;
};
void diff_between_time(struct time t1,
struct time t2,
struct time *diff);
int main()
{
   struct time start_time, stop_time, diff;
   printf("Enter 24-hour Format \nEnter the start time HH:MM:SS.\n");
   scanf("%d:%d:%d", &start_time.hrs,&start_time.min,&start_time.sec);
   printf("Enter the stop time HH:MM:SS.\n");
   scanf("%d:%d:%d", &stop_time.hrs,&stop_time.min,&stop_time.sec);
   diff_between_time(start_time, stop_time, &diff);
   printf("Difference between Time = %d:%d:%d", diff.hrs,diff.min,diff.sec);
   return 0;
}
void diff_between_time(struct time start, struct time stop, struct time *diff) {
    while (stop.sec > start.sec) {
        --start.min;
        start.sec += 60;
    }
    diff->sec = start.sec - stop.sec;

    while (stop.min > start.min) {
        --start.hrs;
        start.min += 60;
    }
    diff->min = start.min - stop.min;
    diff->hrs = start.hrs - stop.hrs;

    // If the result is negative, make it positive
    if (diff->hrs < 0 || diff->min < 0 || diff->sec < 0) {
        diff->hrs = -diff->hrs;
        diff->min = -diff->min;
        diff->sec = -diff->sec;
    }
}




