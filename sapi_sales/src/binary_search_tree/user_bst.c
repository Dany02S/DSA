//
// Created by Dani on 4/27/2022.
//

#include "../../headers/binary_search_tree/user_bst.h"


void create (UserTreeNode** userTN){
    *userTN = (UserTreeNode*) malloc(sizeof (UserTreeNode));
    createUser(&(*userTN)->info);

}
void insert (UserTreeNode** userTN, User* user) {
    if(*userTN == NULL){
        create(userTN);
        (*userTN)->left = (*userTN)->right = NULL;
        (*userTN)->info = user;
        (*userTN)->info->Id = rand() % 100;
    }else if(user->Id >= (*userTN)->info->Id){
        insert(&(*userTN)->right, user);
    }else if(user->Id < (*userTN)->info->Id){
        insert(&(*userTN)->left, user);
    }
}
bool search (UserTreeNode* userTN, int id){
    if(userTN == NULL){
        return false;
    }else if(id < userTN->info->Id){
        search(userTN->left, id);
    }else if(id > userTN->info->Id){
        search(userTN->right, id);
    } else{
        return true;
    }
}

void destroy (UserTreeNode** userTN){
    free((*userTN)->info);
    (*userTN)->info = NULL;
    free(*userTN);
    *userTN = NULL;
}

void inorderPrint (UserTreeNode* userTN, char* dest){
    freopen(dest, "r", stdout);
    if(userTN == NULL){

    }


    freopen("CON", "r", stdout);
}

User minimum (UserTreeNode* userTN){

}
User maximum (UserTreeNode*);

