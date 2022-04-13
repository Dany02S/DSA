//
// Created by Dani on 4/13/2022.
//

#include "lab9.h"

void testUserList(){
    UserNode *first;
    createUserNode(&first, randUser());

    insertLast(first, randUser());
    insertFirst(&first, randUser());

    printUserList(first, "CON");
}
