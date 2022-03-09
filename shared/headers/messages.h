//
// Created by Dany2 on 3/8/2022.
//

#ifndef DTS_MESSAGES_H
#define DTS_MESSAGES_H

#include <stdio.h>
#include <stdlib.h>

enum LabType
{
    LAB1,
    LAB2,
    LAB3,
};

void printDescriptionMessage(enum LabType messageType);

#endif //DTS_MESSAGES_H
