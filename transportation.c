#include "transportation.h"

// Input general transportation from the file.
bool In_tran(void *transport, FILE *file)
{
   int key;
   if(!fscanf(file, "%d", &key)return false;
   switch(key) {
            case 0:
                *((int*)transport) = TRUCK;
                if(!In_t(transport + 4, file))return false;
            break;
            case 1:
                *((int*)transport) = BUS;
                if(!In_b(transport + 4, file))return false;
            break;
            case 2:
                *((int*)transport) = CAR;
                if(!In_c(transport + 4, file))return false;
            break;
            default:
                return false;
     }
    return fscanf(file, "%d %lf", transport + 8, transport + 12);
}

// Outputs all parameters of transportation.
bool Out_tran(void *transport, FILE *file)
{
    bool rez = false;
    switch(*((int*)transport)) {
            case TRUCK:
                 rez = Out_t(transport + 4, file);
                 goto GENERAL_DATA_PRINT;
            case BUS:
                rez = Out_b(transport + 4, file);
                goto GENERAL_DATA_PRINT;
            case CAR:
                rez = Out_c(transport + 4, file);
            GENERAL_DATA_PRINT:
                fprintf(file, "%s %d %s %f",". Fuel tank capacity = ", *((int*)(transport + 8)), "; Liters per 100 km needed ", *((double*)(transport + 12)));
                fprintf(file, "%s %f %c", ". Max distance can be covered = ", Max_dist(transport), '\n');
            break;
            default:
                fprintf(file, "Incorrect figure!\n");
                 return false;
        }
    return rez;
}


// Creating random parameters for generel transportation.
void InRnd_tran(void *t)
{   
    int k = rand() % 3;
    switch(k) {
        case 0:
            *((int*)t) = TRUCK;
            InRnd_t(t + 4);
            *((int*)(t + 8)) = 200 + rand()%1300;
            *((double*)(t + 12))  = 1.0 * (100 + rand()%(1000-100))/10;
        break;
        case 1:
            *((int*)t) = BUS;
            InRnd_b(t + 4);
            *((int*)(t + 8)) = 200 + rand()%100;
            *((double*)(t + 12))  = 1.0 * (410 + rand()%(1000-410))/10;
        break;
        case 2:
            *((int*)t) = CAR;
            InRnd_c(t + 4);
            *((int*)(t + 8)) = 45 + rand()%(100 - 45);
            *((double*)(t + 12)) = 1.0 * (50 + rand()%100)/10;
        break;
    }
}

// Counting the maximum distance for transportation.
double Max_dist(void *tr)
{
    double lit_per_100_km = *((double*)(t + 12));
    int fuel_tank_capacity = ((int*)(t + 8));
    return  tr->lit_per_100_km * 100.0 * tr->fuel_tank_capacity;
}
