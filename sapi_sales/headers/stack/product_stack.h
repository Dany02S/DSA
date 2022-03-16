//
// Created by Dani on 3/16/2022.
//

#ifndef MAIN_C_PRODUCT_STACK_H
#define MAIN_C_PRODUCT_STACK_H

#include "product.h"

typedef struct {
    unsigned int capacity;
    int top;
    Product** products;
}ProductStack;

void createProductStack (ProductStack **productStack, unsigned int capacity);
void push(ProductStack *productStack, Product *product);
void pop(ProductStack *productStack);
Product* top (ProductStack *productStack);

bool stackIsEmpty (ProductStack *productStack);
bool stackIsFull(ProductStack *productStack);
void deleteProductStack(ProductStack **productStack);



#endif //MAIN_C_PRODUCT_STACK_H
