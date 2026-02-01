#ifndef LOADINGBAR_H
#define LOADINGBAR_H

extern void randomSleep(double factor);
extern void printBar();
extern int incr(int x);


/**
 *      function to start the loading bar
 * factor = speed of loading bar
 * str1 = Message shown while loading
 * str2 = Message shown after completion
 * togglePercentage = 1 to display the percentage while loading. 0 to not display it.
 * toggleMsg1 = 1 to display the str1 message while loading. 0 to not display it.
 * toggleMsg2 = 1 to display the str2 message when finished. 0 to not display it.
 */

extern void run(double factor, char* str1, char* str2, int togglePercentage, int toggleMsg1, int toggleMsg2);

#endif