//
// Created by Dani on 3/16/2022.
//

#include "product_array.h"

void createProductArray(ProductArray **productArray,int maxProducts){
    *productArray = (ProductArray *)malloc(1*sizeof(ProductArray));

    (*productArray)->Capacity = maxProducts;
    (*productArray)->numOfProducts = 0;
    (*productArray)->Products = malloc(0*sizeof (Product));
}

void deleteProductArray(ProductArray **productArray){
    clearProducts(*productArray);
    free(*productArray);
    *productArray = NULL;
}

void clearProducts(ProductArray *productArray){
    for (int i = 0; i < productArray->numOfProducts ; ++i) {
        free(productArray->Products[i]);
        productArray->Products[i] = NULL;
    }
}

bool addNewProduct(ProductArray *productArray, Product* newProduct){
    printf("%i\n", productArray->numOfProducts);
    printf("%i", productArray->Capacity);
    if(productArray->numOfProducts < productArray->Capacity) {
        productArray->Products = realloc(productArray->Products, ((productArray->numOfProducts) + 1) * sizeof(Product));
        printf("%i", productArray->Capacity);
        productArray->Products[productArray->numOfProducts] = newProduct;
        productArray->numOfProducts++;
        printf("Num of users is: %i\n", productArray->numOfProducts);
        return true;
    }
    return false;
}
