#include <stdio.h>
#include <string.h>
#include "user.h"
#include "file.h"

void signup()
{
    USER u;
    printf("Enter username: ");
    scanf("%s", u.username);

    printf("Enter password: ");
    scanf("%s", u.password);

    save_user(u);
    printf("Signup successful\n");
}

int signin()
{
    char uname[30], pwd[30];
    printf("Username: ");
    scanf("%s", uname);
    printf("Password: ");
    scanf("%s", pwd);

    if (check_user(uname, pwd))
    {
        printf("Login successful\n");
        return 1;
    }
    printf("Invalid login\n");
    return 0;
}

