#include <stdio.h>
#include "loadingBar.h"
#include <time.h>

int main(void){

    run(10.0, "Installing main part", "Finished Task 1", 1, 1, 1);
    run(8.0, "Load extra files", "Finished Task 2", 0, 1, 0);
    run(0.05, "Starting program", "Finished Task 3", 0, 0, 1);

}