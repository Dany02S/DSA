//
// Created by Dani on 5/11/2022.
//

#ifndef MAIN_C_PRODUCT_HASH_H
#define MAIN_C_PRODUCT_HASH_H

#include "product.h"
#include "user.h"
#include "user_array.h"

typedef struct Hash{
    User** table;
    int capacity, elements;
}Hash;

void createHash (Hash** pHash,int capacity);
void insertHash (Hash* hash, User* user);
void printHashTable (Hash* hash);
int searchHashTable (Hash* hash, int id);
void deleteFromHashTable (Hash* hash, int id);
void freeHashTable (Hash** pHash);


#endif //MAIN_C_PRODUCT_HASH_H
