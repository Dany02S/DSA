#include "../../headers/models/user.h"

int numberOfUsers = 0;


// Getters ⬅️

char *getUserType(enum Type type)
{
    switch (type)
    {
        case Student:
            return "Student";

        case Teacher:
            return "Teacher";

        default:
            return "Undefined";
    }
}

char *getGender(enum Gender type)
{
    switch (type)
    {
        case Male:
            return "Male";
        case Female:
            return "Female";
        default:
            return "Undefined";
    }
}

char *getSpecialization(enum Specialization type)
{
    switch (type)
    {
        case Informatika:
            return "Informatika";

        case Szamtech:
            return "Szamtech";

        case Automatizalas:
            return "Automatizalas";

        case Tavkozles:
            return "Tavkozles";

        case Mechatronika:
            return "Mechatronika";

        default:
            return "Nincs jo szak megadva";
    }
}

// Creating and setting data 📝

void createUser(User **user){
    *user = (User*)malloc(sizeof(User));
}

void deleteUser(User **user){
    free(*user);
    *user = NULL;
}

void setUserData(User *user, char *name, enum Type type, enum Gender gender, enum Specialization specialization){
//    int birthYear, int birthMonth, int birthDay
    user->Id = ++numberOfUsers;
    strcpy(user->Name, name);
    user->type = type;
    user->gender = gender;
    user->specialization = specialization;
    user->date.birthDay = randDay();
    user->date.birthMonth = randMonth();
    user->date.birthYear = randYear();
}



void printUser(User *user, char *destination)
{
    freopen(destination, "w", stdout);
    printf("details: \n"
           "\t - ID: %i\n"
           "\t - NAME: %s\n"
           "\t - TYPE: %s\n"
           "\t - GENDER: %s\n"
           "\t - SPECIALIZATION: %s\n"
           "\t - BIRTH DATE: %i.%i.%i\n",
           user->Id,
           user->Name,
           getUserType(user->type),
           getGender(user->gender),
           getSpecialization(user->specialization),
           user->date.birthYear,
           user->date.birthMonth,
           user->date.birthDay);

    freopen(destination, "w", stdout);
}

// Plus functions

int randYear(){
    srand(time(NULL));
    return (rand() % (2016 - 1960 + 1)) + 1960;
}

int randMonth(){
    srand(time(NULL));
    return (rand() % (12 - 1 + 1)) + 1;
}

int randDay(){
    srand(time(NULL));
    return (rand() % (31 - 1 + 1)) + 1;
}

int randType(){
    srand(time(NULL));
    return rand() % 2;
}

int randGen(){
    srand(time(NULL));
    return rand() % 2;
}

int randSpec(){
    srand(time(NULL));
    return rand() % 5;
}

char *randName(){
    static char names[][20] = {"Dani", "Peti", "Robi", "Bernad", "Mark"};
    return names[rand()% 5];
}

