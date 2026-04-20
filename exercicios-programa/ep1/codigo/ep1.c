/*
Comando para rodar o programa: 
gcc -std=c99 -Wall -pedantic ep1.c -o ep1
*/
#include<stdio.h>
#DEFINE true = 1;
#DEFINE false = 0;


int compara_tempos(int t1, int t2){
    if (t1 > t2){
        return 1;
    }
    if (t1 < t2){
        return -1;
    }
    if (t1 == t2){
        return 0;
    }
}

int compara_voltas(int v1, int v2){
    if (v1 > v2){
        return 1;
    }
    if (v1 < v2){
        return -1;
    }
    if (v1 == v2){
        return 0;
    }
}

//Se 1 é melhor que 2, o retorno será -1.
int compara_melhor(int n1, int n2, int t1, int v1, int t2, int v2){
    int comparacao_tempos = compara_tempos(t1, t2);
    //Se são com tempos diferentes, o com menor tempo é o melhor ou não, simples assim.
    if(comparacao_tempos == -1 || comparacao_tempos == 1){
        return comparacao_tempos;
    }
    //Se não, eles tem o mesmo tempo, então vamos comparar voltas.
    int comparacao_voltas = compara_voltas(v1, v2);
    if(comparacao_voltas == -1 || comparacao_voltas == 1){
        return comparacao_voltas;
    }
    //Se até as voltas empatarem, vence o com o menor número
    int comparacao_numeros = n1 > n2 ? 1 : (n1 < n2) ? -1 : 0;
    

}

//Compara com o primeiro lugar
int compara_com_primeiro(){}

//Compara com o segundo lugar
int compara_com_segundo(){}

//Substitui um dos dois, a função recebe os valores substitutos e os endereços de memória dos alvos.
int substitui(){}

int dataflow(){
    //Quando scanf(%d %d %d) != 0, parou tudo.
    /*Fluxo de dados:


    Recebe um, veja se é o mesmo piloto que o primeiro (guarda numa variável, true ou false)
    Se for o mesmo piloto e i for melhor que o primeiro, ele substitui o primeiro e só.
    Se for o mesmo piloto e i não for melhor que o primeiro, nada acontece.(Permanece a tentativa mais antiga)
    --------
    Se não for o mesmo piloto e i for melhor que o primeiro, i vira o primeiro, o primeiro vira o segundo.
    Se não for o mesmo piloto e i não for melhor que o primeiro, vamos comparar com o segundo:
        --------
        Sendo ou não o mesmo piloto, se i for melhor que o segundo, ele substitui o segundo.
    
    */
}

int main(){
    printf("Hello World");
}
