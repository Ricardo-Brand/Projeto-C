#include <math.h>
#include <stdlib.h>

double pot(int base, int expoente){
    int verificar_bin, exp_bin; 
    double resultado;

    exp_bin = 0;
    verificar_bin = abs(expoente);
    resultado = 1.0;

    if(expoente == 0){
        return 1;
    }
    if(base == 0){
        return 0;
    }
    if(expoente > 0 || base < 0){
        for(int i=0, j=1;i<32;i++, j*=2){
            if(expoente & (1 << i)){
                while(exp_bin < j){
                    resultado = fabs(resultado * base);
                    exp_bin++;
                }
                exp_bin = 0;
            }
            if(verificar_bin <= 1){
                break;
            }
            verificar_bin = verificar_bin/2;
        }
    }   
    else{
        expoente = abs(expoente);
        for(int i=0, j=1;i<32;i++, j*=2){
            if(expoente & (1 << i)){
                while(exp_bin < j){
                    resultado = fabs(resultado / base);
                    exp_bin++;
                }
                exp_bin = 0;
            }
            if(verificar_bin <= 1){
                break;
            }
            verificar_bin = verificar_bin / 2;
        }
    }
    
    return resultado;
}