#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct user
{
    char username[30];
    char password[30];
} USER;

typedef struct train
{
    int train_no;
    char train_name[50];
    char source[30];
    char destination[30];
    int total_seats;
} TRAIN;

typedef struct passenger
{
    int seat_no;
    char name[30];
    int age;
    char gender;
    struct passenger *next;
} PASSENGER;

#endif

