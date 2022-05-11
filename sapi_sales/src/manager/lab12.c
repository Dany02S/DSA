//
// Created by Dani on 5/11/2022.
//

#include "lab12.h"

_Noreturn void testHash(){
    int ans, go = 1, id;
    Hash * hash;
    createHash(&hash, 8);

    while (go) {
        printf(""
               "1 : Insert\n"
               "2 : Delete\n"
               "3 : Search\n"
               "4 : Print\n"
               "5: : Exit\n"
               "Enter your choice: ");
        scanf("%i", &ans);

        switch (ans) {
            case 1:
                insertHash(hash, randUser());
                break;
            case 2:
                printf("Delete Id: ");
                scanf("%i", &id);
                deleteFromHashTable(hash, id);
                break;
            case 3:
                printf("Search Id: ");
                scanf("%i", &id);
                printf("\n%i\n", searchHashTable(hash, id));
                break;
            case 4:
                printHashTable(hash);
                break;
            case 5:
                freeHashTable(&hash);
                go = 0;
                break;
            default:
                printf("Rossz input!");
                break;
        }
    }
}
