//
// Created by Dany2 on 3/8/2022.
//

#ifndef DTS_PRODUCT_H
#define DTS_PRODUCT_H

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum PType{
    Food,
    School,
    Home,
};

typedef struct {
    int Id;
    char Code[20];
    char Name[20];
    enum PType type;
    int Amount;
    time_t Timestamp;

}Product;

char* getProductType(enum PType type);

void createProduct(Product **product);
void deleteProduct(Product **product);

void setProductData(
        Product *product,
        int id,
        char *Code,
        char *name,
        enum PType type,
        int amount,
        time_t timestamp
        );

void printProduct(Product *product, char *destination);

#endif //DTS_PRODUCT_H
