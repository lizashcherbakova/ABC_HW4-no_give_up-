#ifndef TRUCK_H
#define TRUCK_H

#include <stdio.h>
#include "stdbool.h"
#include "rnd.h"

struct truck{
   int load_capacity;
};

// Input truck parameters from the file.
bool In_t(struct truck *t,  FILE *file);

// Creating random parameters for the truck.
void InRnd_t(struct truck *t);

// Output track parameters.
bool Out_t(struct truck *t, FILE *file);


#endif // TRUCK_H
