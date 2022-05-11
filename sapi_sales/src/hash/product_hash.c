//
// Created by Dani on 5/11/2022.
//

#include "product_hash.h"

void createHash (Hash** pHash,int capacity){
    *pHash = (Hash*) malloc(sizeof (Hash));
    (*pHash)->table = (User**) malloc(capacity * sizeof(User*));
    for (int i = 0; i < capacity; ++i) {
        createUser(&((*pHash)->table[i]));
        (*pHash)->table[i]->Id = -1;
    }
    (*pHash)->capacity = capacity;
    (*pHash)->elements = 0;
}

void insertHash (Hash* hash, User* user){
    int i = 0, j;
        do{
            j = (user->Id + i)%hash->capacity;
            if(hash->table[j]->Id == -1 && hash->elements != hash->capacity){
                hash->table[j] = user;
                hash->elements++;
                return;

            }
            i++;
        } while (i != hash->capacity);
        printf("Tulcsordulas!\n");
    }


void printHashTable (Hash* hash){
    for (int i = 0; i < hash->capacity; ++i) {
        if(hash->table[i]->Id != -1){
            printUser(hash->table[i], "CON");
        }
    }
}

int searchHashTable (Hash* hash, int id){
    for (int i = 0; i < hash->capacity; ++i) {
        if(hash->table[i]->Id != -1){
            if(hash->table[i]->Id == id){
                return i;
            }
        }
    }
    return -1;
}

void deleteFromHashTable (Hash* hash, int id){
    for (int i = 0; i < hash->capacity; ++i) {
        if(hash->table[i]->Id != -1){
            if(hash->table[i]->Id == id){
                hash->table[i]->Id = -1;
                hash->elements--;
            }
        }
    }
}

void freeHashTable (Hash** pHash){
    free((*pHash)->table);
    (*pHash)->table = NULL;
    free(pHash);
    pHash = NULL;
}
