//
// Created by Dani on 4/6/2022.
//

#include "../../headers/queue/user_queue.h"

void createUserQueue(UserQueue **userQueue, unsigned int maxSize){
    *userQueue = malloc(sizeof (UserQueue));
    (*userQueue)->size = maxSize;
    (*userQueue)->users = malloc((*userQueue)->size*sizeof (User*));
    for (int i = 0; i < maxSize; ++i) {
        createUser(&(*userQueue)->users[i]);
    }
    (*userQueue)->front = 0;
    (*userQueue)->rear = 0;
}

bool queueIsEmpty(UserQueue *userQueue){
    if(userQueue->rear == 0 || userQueue->front == userQueue->rear){
        return true;
    }
    return false;
}

bool queueIsFull(UserQueue *userQueue){
    if(userQueue->rear == userQueue->size){
        return true;
    }
    return false;
}

void enqueue(UserQueue* userQueue,User *user){
    if(!queueIsFull(userQueue)){
        userQueue->users[userQueue->rear] = user;
        userQueue->rear++;
    }
}

void dequeue(UserQueue* userQueue){
    if(!queueIsEmpty(userQueue)) {
        userQueue->front++;
    }
}

int findElementInQueue(UserQueue* userQueue, int userId){
    for (int i = userQueue->front; i < userQueue->rear; ++i) {
        if(userQueue->users[i]->Id == userId){
            return i;
        }
    }
    return -1;
}

bool userComp(User user1, User user2){
    if(
    user1.Id == user2.Id &&
    strcmp(user2.Name, user1.Name) == 0 &&
    user1.gender == user2.gender &&
    user2.specialization == user1.specialization &&
    user1.type == user2.type &&
    user1.date.birthDay == user2.date.birthDay &&
    user1.date.birthYear == user2.date.birthYear &&
    user1.date.birthMonth == user2.date.birthMonth
    ){
        return true;
    }
    return false;
}

int findElementInQueueByUser(UserQueue* userQueue, User user){
    for (int i = userQueue->front; i < userQueue->rear; ++i) {
        if(userComp(*userQueue->users[i], user)){
            user.Id;
        }
    }
    return -1;
}

void printQueue(UserQueue* userQueue, char*destination){
    for (int i = userQueue->front; i < userQueue->rear; ++i) {
        printUser(userQueue->users[i], destination);
    }
}

void deleteQueue(UserQueue** userQueue){
    for (int i = 0; i < (*userQueue)->size; ++i) {
        free((*userQueue)->users[i]);
        (*userQueue)->users[i] = NULL;
    }
    free(*userQueue);
    *userQueue = NULL;
}








