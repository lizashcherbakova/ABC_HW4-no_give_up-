#include "car.h"

// Input car parameters from the file.
bool In_c(void *c, FILE *file)
{
   return fscanf(file, "%hu", (int*)c);
}

// Output car parameters.
bool Out_c(void *c, FILE *file)
{
   return fprintf(file, "%s %d","This is a car: maximum speed = ", *((int*)c));
}

// Creating random parameters for the car.
void InRnd_c(void *c)
{
    *((int*)c) = rand()%256;
}
