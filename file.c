#include <stdio.h>
#include <string.h>
#include "file.h"

void save_user(USER u)
{
    FILE *fp = fopen("usr_logins.dat", "ab");
    fwrite(&u, sizeof(USER), 1, fp);
    fclose(fp);
}

int check_user(char *uname, char *pwd)
{
    USER u;
    FILE *fp = fopen("usr_logins.dat", "rb");
    if (!fp) return 0;

    while (fread(&u, sizeof(USER), 1, fp))
    {
        if (!strcmp(u.username, uname) && !strcmp(u.password, pwd))
        {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

void save_train(TRAIN t)
{
    FILE *fp = fopen("trains_info.dat", "ab");
    fwrite(&t, sizeof(TRAIN), 1, fp);
    fclose(fp);
}

void show_trains()
{
    TRAIN t;
    FILE *fp = fopen("trains_info.dat", "rb");
    if (!fp) return;

    printf("\nAvailable Trains:\n");
    while (fread(&t, sizeof(TRAIN), 1, fp))
    {
        printf("%d | %s | %s -> %s | Seats:%d\n",
               t.train_no, t.train_name, t.source,
               t.destination, t.total_seats);
    }
    fclose(fp);
}

