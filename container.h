#ifndef CONTAINER_H
#define CONTAINER_H
#define MAX_LEN 10000
#include "transportation.h"


void quick_sort(void *mas, int size);

// Initializing the container.
void Init(void *c);

// Input all transportation from the file. If meets a mistake stops reading.
void In_cont(void *c, FILE *file);

// Creating random transportation with given size.
void InRnd_cont(void *c, int size);

// Outputs items in the container to the given file.
void Out_cont(void *c, FILE *file);

void _errMessage1();

void _errMessage2();

#endif // CONTAINER_H
