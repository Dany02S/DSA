//
// Created by Dany2 on 3/8/2022.
//

#include "../../headers/manager/lab2.h"

void testUserFunctionalies(){
    User *user1, *user2, *user3;

    // Creating Users 🐣
    createUser(user1);
    createUser(user2);
    createUser(user3);

    // Fill with Data 📝
    setUserData(user1, "Dani", Student, Male, Informatika, 2002, 04, 28);
    setUserData(user2, "Peti", Student, Male, Informatika, 2002, 5, 15);
    setUserData(user3, "Csabi", Student, Male, Szamtech, 2002, 7, 16);

    // Print Users 🖨️
    printUser(user1, "CON");
    printUser(user2, "CON");
    printUser(user3, "CON");

    // Delete Users 🗑️
    deleteUser(user1);
    deleteUser(user2);
    deleteUser(user3);
}
