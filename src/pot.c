int pot(int a, int b){
    int n = b, exp_bin = 0, resultado = 1;
    if(b == 0){
        return 1;
    }
    
    for(int i=0, j=1;i<32;i++, j*=2){
        if(b & (1 << i)){
            while(exp_bin < j){
                resultado = resultado * a;
                exp_bin++;
            }
            exp_bin = 0;
        }
        if(n <= 1){
            break;
        }
        n = n/2;
    }
    
    return resultado;
}