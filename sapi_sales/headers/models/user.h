#ifndef DTS_USER_H
#define DTS_USER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int birthYear;
    int birthMonth;
    int birthDay;
} Date;

enum Type
{
    Student,
    Teacher,
};

enum Gender
{
    Male,
    Female,
};

enum Specialization
{
    Informatika,
    Szamtech,
    Automatizalas,
    Tavkozles,
    Mechatronika,
};

typedef struct User
{
    int Id;
    char Name[21];
    enum Type type;
    enum Specialization specialization;
    enum Gender gender;
    Date date;

} User;

char *getUserType(enum Type type);
char *getGender(enum Gender type);
char *getSpecialization(enum Specialization type);

void createUser(User **user);

void setUserData(
        User *user,
        char *Name,
        enum Type type,
        enum Gender gender,
        enum Specialization stearate,
        int birthYear,
        int birthMonth,
        int birthDay);

void printUser(User *user, char *destination);

void deleteUser(User **user);

#endif //DTS_USER_H
