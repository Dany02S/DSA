//
// Created by Dani on 4/13/2022.
//

#include "lab9.h"

void testUserList(){
    UserNode *first;
    int choice, n = 1, enter;
    createUserNode(&first, randUser());

    while(n) {
        printf(
                "1 - insertFirst\n"
                "2 - insertLast\n"
                "3 - removeFirst\n"
                "4 - removeLast\n"
                "5 - findById\n"
                "6 - printList\n"
                "7 - exit\n"
                "Enter: ");

        scanf("%d", &enter);
        switch (enter) {
            case 1:
                insertFirst(&first, randUser());
                break;
            case 2:
                insertLast(first, randUser());
                break;
            case 3:
                removeFirst(&first);
                break;
            case 4:
                removeLast(first);
                break;
            case 5:
                printf("Enter Id: ");
                scanf("%i", &choice);
                findElementInList(first, choice);
                break;
            case 6:
                printUserList(first, "CON");
                break;
            case 7:
                deleteUserList(&first);
                n = 0;
                break;

            default:
                printf("Wrong number entered");
                break;
        }
    }
}
