#ifndef CAR_H
#define CAR_H

#include <stdio.h>
#include "stdbool.h"
#include "rnd.h"

struct car{
    unsigned short max_speed;
};
// Input car parameters from the file.
bool In_c(void *c,  FILE *file);

// Output car parameters.
void InRnd_c(void *c);

// Creating random parameters for the car.
bool Out_c(void *c, FILE *file);


#endif // CAR_H
