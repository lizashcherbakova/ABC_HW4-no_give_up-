#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H

#include "truck.h"
#include "bus.h"
#include "car.h"

enum key_val{ TRUCK = 0 , BUS, CAR };

// Input general transportation from the file.
bool In_tran(void *t,  FILE *file);

// Creating random parameters for generel transportation.
void InRnd_tran(void *t);

// Outputs all parameters of transportation.
bool Out_tran(void *t, FILE *file);

// Counting the maximum distance for general transportation.
double Max_dist(void *tr);

#endif // TRANSPORTATION_H
