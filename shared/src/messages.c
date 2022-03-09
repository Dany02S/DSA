//
// Created by Dany2 on 3/8/2022.
//

#include "../headers/messages.h"

void printDescriptionMessage(enum LabType messageType){
    switch (messageType)
    {
        case LAB2:
            printf("############################################");
            printf("Testing basic user & product functionalities");
            printf("############################################");
            break;

        case LAB3:
            printf("##################################################################");
            printf("Testing User with modified birthDate and User array functionaities");
            printf("##################################################################");
            break;

        default:
            printf("Undefined description");
            break;
    }
}