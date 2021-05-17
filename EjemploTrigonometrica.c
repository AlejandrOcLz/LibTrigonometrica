/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EjemploTrigonometrica.c
 * Author: Alejandro Ocampo Lopez
 *
 * Created on 15 de mayo de 2021, 12:04 PM
 */
#include <Trigonometrica.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x;
    x=1.0;
    printf("El valo de coseno(%f) es igual a %f\n",x,coseno(x));
    printf("El valo de seno(%f) es igual a %f\n",x,seno(x));
    x=2.0;
    printf("El valo de coseno(%f) es igual a %f\n",x,coseno(x));
    printf("El valo de seno(%f) es igual a %f\n",x,seno(x));
    x=3.0;
    printf("El valo de coseno(%f) es igual a %f\n",x,coseno(x));
    printf("El valo de seno(%f) es igual a %f\n",x,seno(x));
    x=4.0;
    printf("El valo de coseno(%f) es igual a %f\n",x,coseno(x));
    printf("El valo de seno(%f) es igual a %f\n",x,seno(x));
    x=5.0;
    printf("El valo de coseno(%f) es igual a %f\n",x,coseno(x));
    printf("El valo de seno(%f) es igual a %f\n",x,seno(x));
    return (EXIT_SUCCESS);
}

