#include <stdio.h>

/**
 * @brief Função que verifica se a matriz é de permutação
 * 
 * @param matriz matriz Indica a matriz a ser verificada
 * @param n indica a dimensão da matriz
 * @param soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos da matriz
 * @return int 1 se for permutaçao, 0 se nao for permutaçao
 */
int ehPermutacao( int matriz[][500], int n, int *soma );

int main(int argc, char **argv) {

    int m[500][500];
    int l, c;
    int soma;
    int n;
    int perm;
    scanf("%d%*c", &n);
    for(l=0 ; l<n; l++) {
        for(c=0; c<n; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    perm=ehPermutacao(m, n, &soma);
    printf("%d\n", n);
    if(perm==1) printf("PERMUTACAO\n");
    if(perm==0) printf("NAO EH PERMUTACAO\n");
    printf("%d\n", soma);

    return 0;
}

int ehPermutacao( int matriz[][500], int n, int *soma ) {
    int l, c;
    int um=0, zeros=0;
    for(l=0 ; l<n; l++) {
        for(c=0; c<n; c++) {
            *soma+=matriz[l][c];
        }
    }
    for(l=0 ; l<n; l++) {
        for(c=0; c<n; c++) {
            if(matriz[l][c]==1) um++;
            if(matriz[l][c]==0) zeros++;
        }
        if(um!=1 || um+zeros!=n || zeros!=(n-1)) return 0;
        um=0;
        zeros=0;
    }
    um=0;
    zeros=0;
    for(c=0 ; c<n; c++) {
        for(l=0; l<n; l++) {
            if(matriz[l][c]==1) um++;
            if(matriz[l][c]==0) zeros++;
        }
        if(um!=1 || um+zeros!=n || zeros!=(n-1)) return 0;
        um=0;
        zeros=0;
    }
    return 1;
}