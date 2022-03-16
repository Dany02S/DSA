//
// Created by Dany2 on 3/9/2022.
//

#include "lab3.h"

void testUserFunctionalitiesIII(){
    User *user;
    createUser(&user);
    setUserData(user, "Dani",Student, Male, Informatika);
    printUser(user, "CON");
    deleteUser(&user);
}

void testUserArrayFunctionalities(){

    UserArray *userArray;

    createUserArray(&userArray, 3);

    for (int i = 0; i < 3 ; ++i) {
        addNewUser(userArray, randUser());
        printUser(getUserAtPosition(userArray, i), "CON");
    }

    clearUsers(userArray);
    deleteUserArray(&userArray);
}
