#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

// void EnterTime(int, int);

int main() {
    int hour, minute, second;
    hour = minute = second = 0;

    printf("Enter the hour: ");
    scanf("%d", &hour);

    printf("Enter the minute: ");
    scanf("%d", &minute);


    while(1) {
        system("clear");
        printf("%02d : %02d : %02d", hour, minute, second);

        fflush(stdout);
        second++;

        if (second == 60)
        {
            minute += 1;
            second = 0;
        }
        else if (minute == 60) {
            hour += 1;
            minute = 0;
        }
        else if (hour == 12) {
            hour = 1;
            minute = second = 0;
        }
        sleep(1);

    }

    return 0;

}

// void EnterTime(int hour, int minute) {
//     int hour, minute;
//     printf("Enter the hour: ");
//     scanf("%d", &hour);

//     printf("Enter the minute: ");
//     scanf("%d", &minute);
// }
