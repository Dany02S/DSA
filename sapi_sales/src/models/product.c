//
// Created by Dany2 on 3/8/2022.
//

#include "product.h"

int numOfProducts = 0;

// getters ⬅️

char *getProductType(enum PType type){
    switch (type) {
        case Food: return "Food";
        case School: return "School";
        case Home: return "Home";
        default: return "No type match";
    }
}

void createProduct(Product **product){
    *product = (Product *)malloc(1 * sizeof(Product));
}

void deleteProduct(Product **product){
    free(*product);
    *product = NULL;
}

void setProductData(Product *product, int id, char *code, char *name, enum PType type, int amount){
    product->Id = id;
    strcpy(product->Code, code);
    strcpy(product->Name, name);
    product->type = type;
    product->Amount = amount;
    time(&product->Timestamp);
}

void printProduct(Product *product, char* destination){
    if(product != NULL) {
        freopen(destination, "w", stdout);
        printf("%s details: \n"
               "\t - ID: %i\n"
               "\t - TYPE: %s\n"
               "\t - AMOUNT: %i\n"
               "\t - CREATION DATE: %s\n",
               product->Name,
               product->Id,
               getProductType(product->type),
               product->Amount,
               ctime(&product->Timestamp)
        );
        freopen(destination, "w", stdout);
    }
}
