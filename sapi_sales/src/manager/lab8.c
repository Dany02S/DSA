//
// Created by Dani on 4/6/2022.
//

#include "lab8.h"

void testUserQueueFunctionalities(){
    UserQueue * userQueue;
    createUserQueue(&userQueue, 5);

    enqueue(userQueue, randUser());
    enqueue(userQueue, randUser());
    enqueue(userQueue, randUser());
    enqueue(userQueue, randUser());
    enqueue(userQueue, randUser());

    if(queueIsFull(userQueue)){
        printf("FUll");
    }

    printf("front: %i last: %i\n", userQueue->front, userQueue->rear);

    printQueue(userQueue, "CON");

    dequeue(userQueue);
    dequeue(userQueue);
    dequeue(userQueue);

    printQueue(userQueue, "CON");
    printUser(userQueue->users[findElementInQueue(userQueue, 4)], "CON");


    dequeue(userQueue);
    dequeue(userQueue);

    printQueue(userQueue, "CON");

    deleteQueue(&userQueue);

    // Betoltok 5ot megnezem tele van e, kitorlok 3at ott marad 2, magkeresem a 4est kiiratoma amaradek 2t aztan torlok

}
