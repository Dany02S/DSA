//
// Created by Dani on 5/4/2022.
//

#include "lab11.h"

PERS * input(){
    int places, numPeople;
    freopen("input.txt", "r", stdin);
    scanf("%i", &places);
    scanf("%i", &numPeople);

    int ppp = places / numPeople;
    int pd = places % numPeople;

    for (int i = 0; i < ppp; ++i) {

    }



    freopen("CON", "r", stdin);
}

//void createPers (PERS** pers, char* name, int stam){
//    (*pers) = (PERS*)malloc(sizeof (PERS));
//    (*pers)->next = NULL;
//    strcpy(dat)
//    (*pers)->satmina =
//
//
//}

//void deleteUserList (PERS** pers){
//    PERS *p = *pers;
//    while (p->next != NULL){
//        removeLast(*userNode);
//    }
//    removeFirst(userNode);
//}

//void insertLast (PERS *pers, DATA* data){
//    PERS *p = pers;
//    while(p != NULL){
//        if(p->next == NULL){
//            PERS *new;
//            createPers(&new, data);
//            p->next = new;
//            break;
//        }
//        p = p->next;
//    }
//}