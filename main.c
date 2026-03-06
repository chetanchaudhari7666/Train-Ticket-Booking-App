#include <stdio.h>
#include "user.h"
#include "train.h"
#include "booking.h"
#include "file.h"

int main()
{
    int ch;

    while (1)
    {
        printf("\n1.Signup\n2.Signin\nChoice: ");
        scanf("%d", &ch);

        if (ch == 1)
            signup();
        else if (ch == 2)
        {
            if (signin())
            {
                char opt;
                show_trains();

                while (1)
                {
                    printf("\nR-Reserve Q-Quit: ");
                    scanf(" %c", &opt);

                    if (opt == 'R' || opt == 'r')
                        reserve_ticket();
                    else
                        break;
                }
            }
        }
    }
}

