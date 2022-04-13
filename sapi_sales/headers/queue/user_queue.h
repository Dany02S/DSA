//
// Created by Dani on 4/6/2022.
//

#ifndef MAIN_C_USER_QUEUE_H
#define MAIN_C_USER_QUEUE_H

#include "user.h"
#include <stdbool.h>
#include "user_array.h"


typedef struct{
    int front;
    int rear;
    unsigned int size;
    User **users;
}UserQueue;


void createUserQueue(UserQueue **userQueue, unsigned int maxSize);
bool queueIsEmpty(UserQueue *userQueue);
bool queueIsFull(UserQueue *userQueue);

void enqueue(UserQueue* userQueue,User *user);
void dequeue(UserQueue* userQueue);
int findElementInQueue(UserQueue* userQueue, int userId);
void printQueue(UserQueue* userQueue, char*destination);
void deleteQueue(UserQueue** userQueue);

int findElementInQueueByUser(UserQueue* userQueue, User user);
bool userComp(User user1, User user2);

#endif //MAIN_C_USER_QUEUE_H
