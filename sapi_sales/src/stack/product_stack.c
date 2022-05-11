//
// Created by Dani on 3/16/2022.
//

#include <stdbool.h>
#include "../../headers/stack/product_stack.h"

void createProductStack (ProductStack **productStack, unsigned int capacity){
    *productStack = (ProductStack*) malloc(sizeof (ProductStack));
    (*productStack)->products = (Product **)malloc(capacity * sizeof (Product *));
    (*productStack)->capacity = capacity;
    (*productStack)->top = 0;
}

void push(ProductStack *productStack, Product *product){
    if(productStack->top < productStack->capacity){
        productStack->top++;
        productStack->products[productStack->top] = product;
    }
}

void pop(ProductStack *productStack){
    if(productStack->top > 0) {
        free(productStack->products[productStack->top]);
        productStack->products[productStack->top] = NULL;
        productStack->top--;
    }else{
        printf("\nEmpty stack!");
    }
}

Product * top (ProductStack *productStack){
    if(stackIsEmpty(productStack)){
        printf("\nEmpty stack!");
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
    if(productStack->top  >= productStack->capacity){
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

// 🎲
Product * randProduct(){
    Product *product;
    createProduct(&product);
    setProductData(product,
                   rand() % 10,
                   "abcdefghijk",
                   "name",
                   rand() % 3,
                   rand() % 100
                   );
    return product;
}


