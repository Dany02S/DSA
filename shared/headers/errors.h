//
// Created by Dany2 on 3/8/2022.
//

#ifndef DTS_ERRORS_H
#define DTS_ERRORS_H

#include <stdio.h>
#include <stdlib.h>

enum ErrorType
{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXEPTION,
};

void printErrorMessege(enum ErrorType errorType);

#endif //DTS_ERRORS_H
