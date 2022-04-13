//
// Created by Dani on 4/13/2022.
//

#include "../../headers/list/user_list.h"

void createUserNode (UserNode** userNode, User* userValue){
    (*userNode) = (UserNode*)malloc(sizeof (UserNode));
    (*userNode)->next = NULL;
    createUser(&(*userNode)->userValue);
    setUserData((*userNode)->userValue,
                userValue->Name,
                userValue->type,
                userValue->gender,
                userValue->specialization);
}

void printUserList (UserNode* userNode, char* destination){
    UserNode  *p = userNode;
    while(p != NULL){
        printUser(p->userValue, destination);
        p = p->next;
    }
}


void insertFirst (UserNode** userNode, User* userValue){
    UserNode *new;
    createUserNode(&new, userValue);
    new->next = *userNode;
    *userNode = new;
}

void insertLast (UserNode *userNode, User* userValue){
    UserNode *p = userNode;
    while(p != NULL){
        if(p->next == NULL){
            UserNode *new;
            createUserNode(&new, userValue);
            p->next = new;
            break;
        }
        p = p->next;
    }
}



