#include <stdio.h>
#include "container.h"
#include "string.h"


// 1 - file or random
// 2 - the file or size of container
// 3 - name file for output
// 4 - name file for max distance output
// Here are examples.
// abc_hw -n 15 out1.txt out2.txt
// abc_hw -f in5.txt out1.txt out2.txt

int main(int argc, char** argv)
{
    if(argc != 5) {
        _errMessage1();
        return 1;
    }

    printf("%s", "Start\n");
    char c[200004];
    Init(c);
    FILE * file;
    if(!strcmp(argv[1], "-f")) {
        file = fopen(argv[2],"r");
        if(file){
             In_cont(c, file);
             fclose(file);
        }else{
           printf("%s", "Failed to open input file.\n");
           return 2;
        }
    }
    else if(!strcmp(argv[1], "-n")) {
        int size = atoi(argv[2]);
        if((size < 1) || (size > 10000)) {
            printf("%s %d %s","incorrect numer of transport = ", size, ". Set 0 < number <= 10000\n" );
            return 3;
        }
        InRnd_cont(c, size);
    }
    else {
        _errMessage2();
        return 4;
    }
    if(c.len)
     if(file = fopen(argv[3],"w")){
         Out_cont(c, file);
         fclose(file);
     }else{
         printf("%s", "Failed to open the output file:(\n");
         return 5;
     }

    if(file = fopen(argv[4],"w")){
         quick_sort(c + 4, *((int*)c));
         Out_cont(c, file);
         fclose(file);
    }else{
        printf("%s", "Failed to open the output file for total distance:(\n");
        return 6;
    }
    printf("%s", "Stop\n");
    return 0;
}
