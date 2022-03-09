cmake_minimum_required(VERSION 3.20)
project(DTS C)

set(CMAKE_C_STANDARD 99)

add_executable(

        DTS/sapi_sales/main.c
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
        )

include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models
        shared/headers

)
