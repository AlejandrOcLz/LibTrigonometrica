/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

float seno(float x){
    int bandera=0;
    if(4.71 < x){
        x = (2*3.1415) - x;
        bandera = 1;
    }else{
        if(3.1415 < x){
            x = x - 3.1415;
            bandera = 1;
        }else{
            if(1.57 < x){
                x = 3.1415 - x;
            }
        }
    }
    float fseno = (16*x*(3.1415-x))/((5*9.8696)-(4*x*(3.1415-x)));
    
    if(bandera==1){
        fseno = (-1)*fseno;
    }
    
    return fseno;
}

float coseno(float y){
    int bandera=0;
    if(4.71 < y){
        y = (2*3.1415) - y;
    }else{
        if(3.1415 < y){
            y = y - 3.1415;
            bandera = 1;
        }else{
            if(1.57 < y){
                y = 3.1415 - y;
                bandera = 1;
            }
        }
    }
    float fcoseno = (9.8696-(4*(y*y)))/(9.8696+(y*y));
    
    if(bandera==1){
        fcoseno = (-1)*fcoseno;
    }
    
    return fcoseno;
 }
