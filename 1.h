// Exercicio 01, execute somente o main.c

#pragma once
#ifndef __1_h__
#define __1_h__

/* Inclusões */
#include <stdio.h>

/* Funções */
void ex01()
{
    int INDICE = 13, SOMA = 0, K = 0; 

    while (K < INDICE)
    {
        K = K + 1;
        SOMA = SOMA + K;   
    }
    printf("%d", SOMA);
}

#endif
