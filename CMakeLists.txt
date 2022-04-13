cmake_minimum_required(VERSION 3.20)
project(DTS C)

set(CMAKE_C_STANDARD 99)

add_executable(

        DTS sapi_sales/main.c
        sapi_sales/src/models/user.c
        sapi_sales/headers/models/user.h
        sapi_sales/src/models/product.c
        sapi_sales/headers/models/product.h
        sapi_sales/src/manager/lab2.c
        sapi_sales/headers/manager/lab2.h
        sapi_sales/src/manager/lab_manager.c
        sapi_sales/headers/manager/lab_manager.h
        shared/src/errors.c
        shared/headers/errors.h
        shared/src/messages.c
        shared/headers/messages.h
        sapi_sales/src/manager/lab3.c
        sapi_sales/headers/manager/lab3.h
        sapi_sales/src/models/user_array.c
        sapi_sales/headers/models/user_array.h
        sapi_sales/src/models/product_array.c
        sapi_sales/headers/models/product_array.h
        sapi_sales/src/stack/product_stack.c
        sapi_sales/headers/stack/product_stack.h
        sapi_sales/src/manager/lab_5.c
        sapi_sales/headers/manager/lab_5.h
        sapi_sales/src/queue/user_queue.c
        sapi_sales/headers/queue/user_queue.h
        sapi_sales/src/manager/lab8.c
        sapi_sales/headers/manager/lab8.h sapi_sales/src/list/user_list.c sapi_sales/headers/list/user_list.h sapi_sales/src/manager/lab9.c sapi_sales/headers/manager/lab9.h)

include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/stack
        sapi_sales/headers/models
        sapi_sales/headers/queue
        sapi_sales/headers/list
        shared/headers

)
