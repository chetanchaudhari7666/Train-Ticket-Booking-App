#ifndef FILE_H
#define FILE_H

#include "structures.h"

void save_user(USER u);
int check_user(char *uname, char *pwd);

void save_train(TRAIN t);
void show_trains();

#endif

