// Exercicio 04, execute somente o main.c

#pragma once
#ifndef __4_h__
#define __4_h__

/* Inclusões */
#include <stdio.h>

/* Funções */
void ex04()
{
    printf("Ligaria o interruptor 1 e, apos 10 minutos, o desligaria, para entao ligar o interruptor 2."
            "Iria ate uma das salas e, caso estivesse acesa, associaria a lampada ao interruptor 1."
            "Se estivesse apagada, porem quente,"
            "associaria a lampada ao interruptor 2,"
            "senao"
            "ao interruptor 3."
            "Sem voltar para a sala dos interruptores, visitaria outra sala para descobrir o proximo interruptor, partindo do mesmo principio. Restaria, entao, apenas um interruptor, que obrigatoriamente controla a lampada restante.");
}

#endif