#include <stdio.h>
#include <stdlib.h>
#include "booking.h"
#include "structures.h"

void reserve_ticket()
{
    int seats, i;
    PASSENGER *head = NULL, *temp;

    printf("Enter number of seats: ");
    scanf("%d", &seats);

    for (i = 0; i < seats; i++)
    {
        temp = malloc(sizeof(PASSENGER));
        temp->seat_no = i + 1;
        printf("Name: ");
        scanf("%s", temp->name);
        printf("Age: ");
        scanf("%d", &temp->age);
        printf("Gender(M/F): ");
        scanf(" %c", &temp->gender);
        temp->next = head;
        head = temp;
    }

    printf("Tickets booked successfully\n");
}

