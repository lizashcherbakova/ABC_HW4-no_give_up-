#include "container.h"

// Initializing the container.
void Init(void *c)
{
   *((int*)c) = 0;
}

// Input all transportation from the file. If meets a mistake stops reading.
void In_cont(void *c, FILE *file)
{
    void *container_ptr = c + 4;
    while (In_tran(container_ptr, file)) {
        container_ptr = container_ptr + 4 + 4 + 4 + 8;
        *((int*)c) = *((int*)c) + 1;
    }
}

// Outputs items in the container to the given file.
void Out_cont(void *c, FILE *file)
{
    fprintf(file, "%s %d %s", "Container cotains ", *((int*)c), " elements.\n");
    void *container_ptr = c + 4;
    for(int i = 0; i < *((int*)c); i++) {
        fprintf(file, "%d %s", i, " : ");
        if(!Out_tran(container_ptr, file)){
            fprintf(file, "%s"," Error occured.\n");
            break;
        }
        container_ptr = container_ptr + 4 + 4 + 4 + 8;
    }
}

// Creating random transportation with given size.
void InRnd_cont(void *c, int size)
{
    void *container_ptr = c + 4;
    while(*((int*)c) < size) {
           InRnd_tran(container_ptr);
           container_ptr = container_ptr + 4 + 4 + 4 + 8;
           *((int*)c) = *((int*)c) + 1;
       }
}
