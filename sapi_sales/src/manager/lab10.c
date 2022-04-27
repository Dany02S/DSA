//
// Created by Dani on 4/27/2022.
//

#include "lab10.h"

void binary_search_user_test(){
    UserTreeNode * first = NULL;
    for (int i = 0; i < 90; ++i) {
        insert(&first,randUser());
    }

    if(search(first, 23)){
        printf("Benne van!");
    }

    destroy(&first);
}
