//
// Created by Dany2 on 3/12/2022.
//

#ifndef DTS_USER_ARRAY_H
#define DTS_USER_ARRAY_H

#include <stdbool.h>
#include "user.h"
#include "product.h"

typedef struct {
    User **Users;
    int Capacity;
    int NumOfUsers;
}UserArray;

void createUserArray(UserArray **userArray, int maxUsers); // ✅
void deleteUserArray(UserArray **userArray); // ✅
void clearUsers(UserArray *userArray); // ✅
bool addNewUser(UserArray *userArray, User* newUser); // ✅
User* getUserAtPosition(UserArray * userArray, int position); // ✅


User * randUser(); // ✅

#endif //DTS_USER_ARRAY_H
