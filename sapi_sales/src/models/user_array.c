//
// Created by Dany2 on 3/12/2022.
//

#include "user_array.h"


// 🆕
void createUserArray(UserArray **userArray,int maxUsers){
    *userArray = (UserArray*)malloc(1*sizeof(UserArray));

    (*userArray)->Capacity = maxUsers;
    (*userArray)->NumOfUsers = 0;
    (*userArray)->Users = malloc(0*sizeof (User));
}

// 🧹
void clearUsers(UserArray *userArray){
    for (int i = 0; i < userArray->NumOfUsers ; ++i) {
        free(userArray->Users[i]);
        userArray->Users[i] = NULL;
    }
}

// +🧑
bool addNewUser(UserArray *userArray, User* newUser){
    if(userArray->NumOfUsers < userArray->Capacity) {
        userArray->Users = realloc(userArray->Users, ((userArray->NumOfUsers) + 1) * sizeof(User));
        userArray->Users[userArray->NumOfUsers] = newUser;
        userArray->NumOfUsers++;
        printf("Num of users is: %i\n", userArray->NumOfUsers);
        return true;
    }
    return false;
}

// 🗑️
void deleteUserArray(UserArray **userArray){
    clearUsers(*userArray);
    free(*userArray);
    *userArray = NULL;
}

// 🔍
User* getUserAtPosition(UserArray * userArray, int position){
    if(position <= userArray->NumOfUsers && position >= 0) {
        return userArray->Users[position];
    }
        printf("There is no User on that position");
        return NULL;
}


// 🎲
User * randUser(){
    User *user;
    createUser(&user);
    setUserData(user,
                randName(),
                rand() % 2,
                rand() % 2,
                rand() % 6);
    return user;
}

int getUserById(UserArray * userArray, int id){
    for (int i = 0; i < userArray->NumOfUsers; ++i) {
        if(userArray->Users[i]->Id == id){
            return i;
        }
    }
    printf("Nincs ilyen Id-n levo User");
    return -1;
}


