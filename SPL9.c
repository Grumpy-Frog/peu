//C Program to find the Size of data types

#include<stdio.h>
int main ()
{
    int integer;
    float floatType;
    double doubleType;
    long longType;
    short shortType;
    char CharType;

    printf("Size of int data type=%d\n",sizeof(integer));
    printf("Size of float data type=%d\n",sizeof(floatType));
    printf("Size of double data type=%d\n",sizeof(doubleType));
    printf("Size of long data type=%d\n",sizeof(longType));
    printf("Size of short data type=%d\n",sizeof(shortType));
    printf("Size of char data type=%d\n",sizeof(CharType));

    return 0;
}
