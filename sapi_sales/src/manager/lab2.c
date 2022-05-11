//
// Created by Dany2 on 3/8/2022.
//

#include "lab2.h"

void testUserFunctionalities(){
    User *user1, *user2, *user3;


    // Creating Users 🐣
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);

    // Fill with Data 📝
    setUserData(user1, "Dani", Student, Male, Informatika);
    setUserData(user2, "Peti", Student, Male, Informatika);
    setUserData(user3, "Csabi", Student, Male, Szamtech);

    // Print Users 🖨️
    printUser(user1, "CON");
    printUser(user2, "CON");
    printUser(user3, "CON");

    // Delete Users 🗑️
    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);
}

void testProductFunctionalities(){
    User *prod1, *prod2;

    createProduct(&prod1);
    createProduct(&prod2);

    setProductData(prod1, 1, "001", "Apple", Food,5);
    setProductData(prod2, 2, "002", "Pencil", School,2);

    printProduct(prod1, "CON");
    printProduct(prod2, "CON");

    deleteProduct(&prod1);
    deleteProduct(&prod2);
}
