// Exercicio 05, execute somente o main.c

#pragma once
#ifndef __5__h__
#define __5__h__

/* Inclusões */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Funções */
void ex05()
{
    char str[] = "subi no on ibus", str2[] = "target", *__str = calloc(strlen(str), sizeof(char)), *__str2 = calloc(strlen(str), sizeof(char));
    long len = strlen(str), len2 = strlen(str2);    // reduz a complexidade de tempo dos loops de O(n + O_{strlen}(n)) para O(n), evitando chamadas repetitivas de strlen()

    for(int i = 0; i < len; i++)
    {
        __str[i] = str[len -i -1];  // -1 para pular a casa do \0
    }
    for(int i = 0; i < len2; i++)
    {
        __str2[i] = str2[len2 -i -1];
    }

    printf("\n\t<%s> -> <%s>" "\t * Palindromo"
            "\n\t<%s> -> <%s>" "\t\t\t * Me contrata!!", str, __str, str2, __str2);
}

#endif