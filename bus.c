#include "bus.h"

// Input bus parameters from the file.
bool In_b(void *b, FILE *file)
{
   return fscanf(file, "%hu", (int*)b);
}

// Output bus parameters.
bool Out_b(void *b, FILE *file)
{
   return fprintf(file, "%s %d","This is a bus: Passenger capacity = ", *((int*)void));
}

// Creating random parameters for the bus.
void InRnd_b(void *b)
{
    *((int*)b) = rand()%256;
}
