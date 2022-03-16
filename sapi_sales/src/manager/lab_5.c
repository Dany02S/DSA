//
// Created by Dani on 3/16/2022.
//

#include "lab_5.h"



void product_stack_proba(){
    ProductStack *productStack;
    createProductStack(&productStack, 10);
    int choice, i = 0;
    while (1) {
        printf("\n\n1. Push Operation\n");
        printf("2. Pop Operation\n");
        printf("3. Top Operation\n");
        printf("4. isEmpty operation\n");
        printf("5. isFull operation\n");
        printf("6. Exit\n");
        printf("Enter your choice of operations:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {push(productStack, randProduct()); break;}
            case 2: {pop(productStack); break;}
            case 3: {printProduct(top(productStack), "CON"); break;}

            case 4: {
                if(stackIsEmpty(productStack)){
                    printf("It's empty");
                }else{
                    printf("It has %i elements", productStack->top);
                }; break;}

            case 5: {if(stackIsFull(productStack)){
                    printf("It's full");
            }else{
                    printf("It has %i more space free", productStack->capacity - productStack->top);
            } break;}

            case 6: {deleteProductStack(&productStack); exit(0);}
            default:printf("Incorrect choice \n");
        }
    }
}