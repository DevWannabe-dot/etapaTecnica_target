/**
 * @file    main.c
 * @brief   Arquivo mestre com as questões do desafio Target Sistemas
 * @author  Pedro H. Oliveira
 * @date    2024-10-01
*/

/* Inclusões */
    // Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    // Exercícios
#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"

/* Constantes */
#define SUCESSO     (0)

/* Tipos */

/* Funções */
int main(int argc, char ** argv)
{

    printf("\n1) \t");  ex01();
    printf("\n2) \t");  printf("\t\tO numero inserido%s pertence a sequencia de Fibonacci.", (ex02() ? "" : " nao"));
    printf("\n3) \t");  ex03();
    printf("\n4) \t");  ex04();
    printf("\n5) \t");  ex05();
    printf("\n");

    // Se chegou até aqui, tudo deu certo
    return SUCESSO;
}
