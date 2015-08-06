#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter, numOfSongs, duration, minute, seconds, startTime;
    startTime = 0;
    printf("How many songs are there: ");
    scanf("%d", &numOfSongs);
    for(counter = 1; counter <= numOfSongs; counter++) {
        duration = 0;
        if(counter == numOfSongs)
            printf("What's the timestamp of the end?\nMinute: ");
        else
            printf("What's the timestamp of song %d?\nMinute: ", counter+1);
        scanf("%d", &minute);
        printf("Seconds: ");
        scanf("%d", &seconds);
        duration = minute*60;
        duration = duration + seconds;
        duration = duration - startTime;
        printf("Song %d | Start time: %d seconds | Duration: %d seconds\n\n", counter, startTime, duration);
        startTime = startTime + duration;
    }
    printf("\nThanks for using the Time Calculator!");
    return 0;
}
