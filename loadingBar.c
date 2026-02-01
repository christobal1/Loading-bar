#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#define SIZE 50


void randomSleep(double factor){

    factor *= 0.37;
    
    int r = rand() % 4 + 1;

    if(r == 1){
        usleep(10000 * factor);
    } else if (r==2){
        usleep(50000 * factor);
    } else if (r==3){
        usleep(30000 * factor);
    } else if (r==4){
        usleep(100000 * factor);
    }
}


void printBar(){
    printf("=");
}


int incr(int x){
    return ++x;
}


void run(double factor, char* str1, char* str2, int togglePercentage, int toggleMsg1, int toggleMsg2){
    srand(time(NULL));

    time_t begin;
    time_t end;
    time_t elapsed;
    time(&begin);

    for(int i=0; i<SIZE; i++){
        double percentage = ((double)i / (SIZE-1)) * 100; 

        printf("\r\033[2K[");
        
        for(int j=0; j<i; j++){
            printBar();
        }

        for(int j=i; j<SIZE; j++){
            printf(" ");
        }

        if(toggleMsg1 == 1){
            printf("] (%s)", str1);
        } else {
            printf("]");
        }
        
        if(togglePercentage == 1){
            printf(" %.1f%%", percentage);
        }

        fflush(stdout);

        randomSleep(factor);

    }

    printf("\n%s", str2);

    time(&end);
    elapsed = end - begin;

    if(toggleMsg2 == 1){

        if(elapsed == 0){
            printf(" (in < 1s)");
        } else {
            printf(" (in %lds)", elapsed);
        }

    }

    printf("\n");

}