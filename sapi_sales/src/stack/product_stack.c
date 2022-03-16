//
// Created by Dani on 3/16/2022.
//

#include <stdbool.h>
#include "../../headers/stack/product_stack.h"

void createProductStack (ProductStack **productStack, unsigned int capacity){
    *productStack = (ProductStack*) malloc(sizeof (ProductStack));
    (*productStack)->products = calloc(capacity, sizeof (Product));
    for (int i = 0; i < capacity; ++i) {
        createProduct(&(*productStack)->products[i]);
    }
    (*productStack)->capacity = capacity;
    (*productStack)->top = 1;
}

void push(ProductStack *productStack, Product *product){
    if(productStack->top < productStack->capacity){
        productStack->products = realloc(productStack->products, productStack->top * sizeof (Product));
        productStack->products[productStack->top] = product;
        productStack->top++;
    }

}

void pop(ProductStack *productStack){
    free(productStack->products[productStack->top]);
    productStack->products[productStack->top] = NULL;
    productStack->top--;
}

Product* top (ProductStack *productStack){
    if(stackIsEmpty(productStack)){
        return NULL;
    }
    return productStack->products[productStack->top];
}

bool stackIsEmpty (ProductStack *productStack){
    if(productStack->top == 0){
        return true;
    }
    return false;
}

bool stackIsFull (ProductStack *productStack){
    if(productStack->top >= productStack->capacity){
        return true;
    }
    return false;
}

void deleteProductStack(ProductStack **productStack){
    for (int i = 0; i < (*productStack)->top; ++i) {
        free((*productStack)->products[i]);
        (*productStack)->products[i] = NULL;
    }
    free((*productStack)->products);
    (*productStack)->products = NULL;
    free(*productStack);
    *productStack = NULL;
}


