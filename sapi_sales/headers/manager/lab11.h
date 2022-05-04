//
// Created by Dani on 5/4/2022.
//

#ifndef MAIN_C_LAB11_H
#define MAIN_C_LAB11_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>




typedef struct {
    char* name[21];
    int satmina;
    struct PERS * next;
}PERS;

PERS * input();

void createPers (PERS ** Pers, DATA* data); // ✅
void insertLast (PERS *pers, DATA* data); // ✅
void deleteUserList (PERS ** pers);


#endif //MAIN_C_LAB11_H
