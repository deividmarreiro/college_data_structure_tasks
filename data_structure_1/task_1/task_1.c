//
// Created by david on 5/11/2022.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pointer;

    pointer = (int *) malloc(sizeof(int));

    *pointer = 54;

    printf("Endereco: %p \nValor: %d", pointer, *pointer);
}