#ifndef TEMP_API_H
#define TEMP_API_H

struct sensor {
    uint8_t day;
    uint8_t month;
    uint16_t year;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
};
void cgangeIJ(struct sensor* ,int , int );
int max_t_month(struct sensor* ,int , int );
int min_t_month(struct sensor* ,int , int );
int average_t_month(struct sensor* ,int , int );
int max_t_year(struct sensor* , int , int );
int min_t_year(struct sensor* , int , int );
int average_t_year(struct sensor* , int , int );

#endif // TEMP_API_H
