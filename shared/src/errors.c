//
// Created by Dany2 on 3/8/2022.
//

#include "../headers/errors.h"

void printErrorMessege(enum ErrorType errorType)
{
    switch (errorType)
    {
        case MEMORY_ALLOCATION:
            printf("memoria hely hiba");
            break;
        case FILE_NOT_FOUND:
            printf("Nincs meg a file tess :c");
            break;
        case NULL_POINTER_EXEPTION:
            printf("Pojter nincs meg xd");
            break;

        default:
            break;
    }
}
