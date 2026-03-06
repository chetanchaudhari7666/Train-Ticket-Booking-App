#include <stdio.h>
#include "train.h"
#include "file.h"

void add_train()
{
    TRAIN t;
    printf("Train No: ");
    scanf("%d", &t.train_no);
    printf("Train Name: ");
    scanf("%s", t.train_name);
    printf("Source: ");
    scanf("%s", t.source);
    printf("Destination: ");
    scanf("%s", t.destination);
    printf("Total Seats: ");
    scanf("%d", &t.total_seats);

    save_train(t);
    printf("Train added successfully\n");
}

