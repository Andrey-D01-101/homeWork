#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "temp_api.h"


void cgangeIJ(struct sensor* info,int i, int j)
{
struct sensor temp;
    temp=info[i];
    info[i]=info[j];
    info[j]=temp;
}

int max_t_month(struct sensor* info,int n, int month)
{
int i, j=0, count=0, max_t;
struct sensor *temp_sensor;

    for(i=0; i<n; i++)
        if(info[i].month==month)
            count++;

    temp_sensor=(struct sensor*)malloc(count * sizeof(struct sensor));
    if(temp_sensor==NULL)
        printf("memory is not allocated in \"max_t_month\"\n");

    for(i=0; i<n; i++)
        if(info[i].month==month)
            *(temp_sensor+j++)=*(info+i);

    for(i=0; i<=count; ++i)
    {
        for(j=i; j<count; ++j)
            if(temp_sensor[i].t<=temp_sensor[j].t)
                cgangeIJ(temp_sensor,i,j);
    }
    max_t=temp_sensor->t;
    free(temp_sensor);

    return max_t;
}

int min_t_month(struct sensor* info,int n, int month)
{
int i, j=0, count=0, min_t;
struct sensor *temp_sensor;

    for(i=0; i<n; i++)
        if(info[i].month==month)
            count++;

    temp_sensor=(struct sensor*)malloc(count * sizeof(struct sensor));
    if(temp_sensor==NULL)
        printf("memory is not allocated in \"min_t_month\"\n");

    for(i=0; i<n; i++)
        if(info[i].month==month)
            *(temp_sensor+j++)=*(info+i);

    for(i=0; i<=count; ++i)
    {
        for(j=i; j<count; ++j)
            if(temp_sensor[i].t>=temp_sensor[j].t)
                cgangeIJ(temp_sensor,i,j);
    }
    min_t=temp_sensor->t;
    free(temp_sensor);

    return min_t;
}

int average_t_month(struct sensor* info,int n, int month)
{
int i, j=0, count=0;
int sred, sum=0;
struct sensor *temp_sensor;

    for(i=0; i<n; i++)
        if(info[i].month==month)
            count++;

    temp_sensor=(struct sensor*)malloc(count * sizeof(struct sensor));
    if(temp_sensor==NULL)
        printf("memory is not allocated in \"average_t_month\"\n");

    for(i=0; i<n; i++)
        if(info[i].month==month)
            *(temp_sensor+j++)=*(info+i);

    for(i=0; i<=count; ++i)
    {
        sum+=temp_sensor[i].t;
    }
    sred=sum/count;
    free(temp_sensor);

    return sred;
}

int max_t_year(struct sensor* info, int n, int year)
{
int i, j=0, count=0, max_t;
struct sensor *temp_sensor;

        for(i=0; i<n; i++)
            if(info[i].year==year)
                count++;

        temp_sensor=(struct sensor*)malloc(count * sizeof(struct sensor));
        if(temp_sensor==NULL)
            printf("memory is not allocated in \"max_t_year\"\n");

        for(i=0; i<n; i++)
            if(info[i].year==year)
                *(temp_sensor+j++)=*(info+i);

        for(i=0; i<=count; ++i)
        {
            for(j=i; j<count; ++j)
                if(temp_sensor[i].t<=temp_sensor[j].t)
                    cgangeIJ(temp_sensor,i,j);
        }
        max_t=temp_sensor->t;
        free(temp_sensor);

        return max_t;

}

int min_t_year(struct sensor* info, int n, int year)
{
int i, j=0, count=0, min_t;
struct sensor *temp_sensor;

        for(i=0; i<n; i++)
            if(info[i].year==year)
                count++;

        temp_sensor=(struct sensor*)malloc(count * sizeof(struct sensor));
        if(temp_sensor==NULL)
            printf("memory is not allocated in \"min_t_year\"\n");

        for(i=0; i<n; i++)
            if(info[i].year==year)
                *(temp_sensor+j++)=*(info+i);

        for(i=0; i<=count; ++i)
        {
            for(j=i; j<count; ++j)
                if(temp_sensor[i].t>=temp_sensor[j].t)
                    cgangeIJ(temp_sensor,i,j);
        }
        min_t=temp_sensor->t;
        free(temp_sensor);

        return min_t;

}

int average_t_year(struct sensor* arr_sensor, int n, int year)
{
int i, sred, count=0, sum=0;

    for(i=0; i<n; i++)
        if(arr_sensor[i].year==year)
        {
            sum+=arr_sensor[i].t;
            count++;
        }
    sred=sum/count;

    return sred;
}
