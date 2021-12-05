#ifndef BUS_H
#define BUS_H

#include <stdio.h>
#include "stdbool.h"
#include "rnd.h"


// Input bus parameters from the file.
bool In_b(void *t,  FILE *file);

// Output bus parameters.
void InRnd_b(void *t);

// Creating random parameters for the bus.
bool Out_b(void *t, FILE *file);


#endif // BUS_H
