#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "temp_api.h"

#define SIZE 36


int main(void)
{
int i, month = 3, year = 2023;
struct sensor *arr_sensor;
struct sensor info[SIZE]={{2, 1, 2023, 13, 15, -9},
                          {7, 1, 2023, 14, 8, -14},
                          {15, 1, 2023, 9, 17, -21},
                          {8, 2, 2023, 17, 33, -7},
                          {18, 2, 2023, 12, 19, -4},
                          {26, 2, 2023, 22, 51, -17},
                          {2, 3, 2023, 11, 23, -2},
                          {10, 3, 2023, 7, 20, 0},
                          {23, 3, 2023, 18, 10, 7},
                          {12, 4, 2023, 10, 11, 5},
                          {21, 4, 2023, 8, 45, 14},
                          {29, 4, 2023, 15, 5, 9},
                          {3, 5, 2023, 12, 1, 11},
                          {19, 5, 2023, 9, 41, 16},
                          {25, 5, 2023, 15, 25, 19},
                          {11, 6, 2023, 16, 03, 17},
                          {17, 6, 2023, 11, 49, 15},
                          {23, 6, 2023, 21, 17, 21},

                          {2, 7, 2023, 17, 03, 19},
                          {11, 7, 2023, 19, 19, 23},
                          {25, 7, 2023, 21, 50, 25},
                          {7, 8, 2023, 10, 43, 20},
                          {15, 8, 2023, 13, 00, 28},
                          {29, 8, 2023, 17, 24, 27},
                          {5, 9, 2023, 8, 37, 14},
                          {23, 9, 2023, 16, 25, 16},
                          {30, 9, 2023, 15, 15, 11},
                          {13, 10, 2023, 12, 57, 4},
                          {14, 10, 2023, 15, 41, 7},
                          {26, 10, 2023, 21, 45, 1},
                          {15, 11, 2023, 18, 10, -4},
                          {24, 11, 2023, 19, 55, -10},
                          {30, 11, 2023, 21, 32, -14},
                          {1, 12, 2023, 11, 57, -13},
                          {10, 12, 2023, 16, 41, -18},
                          {27, 12, 2023, 20, 00, -25}};
int number = SIZE;
    arr_sensor=(struct sensor*)malloc(number * sizeof(struct sensor));
    if(arr_sensor==NULL)
        printf("malloc not memory\n");

    for(i=0; i<number; i++)
    {
        *(arr_sensor+i)=info[i];
    }
    printf("\nmax T month %d = %d\n",  month, max_t_month(arr_sensor, number, month));
    printf("\nmin T month %d = %d\n",  month, min_t_month(arr_sensor, number, month));
    printf("\nsred T month %d = %d\n", month, average_t_month(arr_sensor, number, month));
    printf("\nsred T year %d = %d\n", year, average_t_year(arr_sensor, number, year));
    printf("\nmax T year %d = %d\n", year, max_t_year(arr_sensor, number, year));
    printf("\nmin T year %d = %d\n", year, min_t_year(arr_sensor, number, year));
    free(arr_sensor);

    return 0;
}

