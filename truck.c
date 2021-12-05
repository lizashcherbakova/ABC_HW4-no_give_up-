#include "truck.h"

// Input truck parameters from the file.
bool In_t(void *t, FILE *file)
{
   return fscanf(file, "%d", (int*)t);
}

// Output track parameters.
bool Out_t(void *t, FILE *file)
{
   return fprintf(file, "%s %d","This is a truck: Load capacity = ", *((int*)t);
}

// Creating random parameters for the truck.
void InRnd_t(void *t)
{
    *((int*)t = rand()%28000;
}
