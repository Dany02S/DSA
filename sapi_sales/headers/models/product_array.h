//
// Created by Dani on 3/16/2022.
//

#ifndef MAIN_C_PRODUCT_ARRAY_H
#define MAIN_C_PRODUCT_ARRAY_H

#include <stdbool.h>
#include "product.h"

typedef struct {
    Product ** Products;
    int Capacity;
    int numOfProducts;
}ProductArray;

void createProductArray (ProductArray **productArray, int maxProducts);
void deleteProductArray(ProductArray **productArray);
bool addNewProduct(ProductArray* productArray, Product *newProduct);
void clearProducts(ProductArray *productArray);


#endif //MAIN_C_PRODUCT_ARRAY_H
