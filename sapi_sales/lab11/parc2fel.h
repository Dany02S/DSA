//
// Created by Dani on 5/4/2022.
//

#ifndef MAIN_C_PARC2FEL_H
#define MAIN_C_PARC2FEL_H

#include "user.h"
#include "user_array.h"

typedef struct {
    char* name;
    int stamina;
}PERS;

typedef struct UserNode {
    PERS data;
    struct UserNode* next;
}UserNode;



void createUserNode (UserNode** userNode, User* userValue); // ✅
void printUserList (UserNode* userNode, char* destination); // ✅
int findElementInList (UserNode* userNode, int userId); // ✅
void insertFirst (UserNode** userNode, User* userValue); // ✅
void insertLast (UserNode *userNode, User* userValue); // ✅
User* removeFirst (UserNode** userNode); // ✅
User* removeLast (UserNode* userNode); // ✅
void deleteUserList (UserNode** userNode);

#endif //MAIN_C_PARC2FEL_H
