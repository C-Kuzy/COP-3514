/*
 Name: Connor Kouznetsov
 Description: Creating a 12 & 24 Clock Conversion Calculator...

 Enter a 24-Hour time: 23:59
 Equivalent 12-hour time: 11:59 PM

 REFERENCE 12-Hour vs 24-Hour CLOCK:
 Link: https://militarytimechart.com/
*/

#include <stdio.h>

int main() {

    int adjusted_hour, hour, minute;

    printf("Enter a valid 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    //  Notice there are specific Invalid Inputs:
    //  input of hour < 0 & minute < 0
    //  input of hour > 24 & minute < 0
    
    if (hour > 24 || hour < 0 ||
        minute >= 60 || minute < 0 ||
        (hour == 24 && minute != 0)) {
    
        // terminate

        printf("Undefined 24 hour time entered\n");
        return 0;
    }

    if (hour == 0 || hour == 24)
        adjusted_hour = 12;
    else if (hour > 12)
        adjusted_hour = hour - 12;
    else
        adjusted_hour = hour;

    //Determining AM or PM
    // 12:00 AM is midnight, 12:00 PM is noon
    printf("Equivalent 12-hour time: %02d:%02d %s\n", 
        adjusted_hour, minute, hour < 12 || hour == 24 ? "AM" : "PM");

    return 0;
}