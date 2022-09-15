#include <stdio.h>

int main() {

    int casos, i;
    int eq=0;
    int l, c;
    int k; //contador para verificar as fraçoes.
    int m;
    double fra1, fra2;
    scanf("%d", &casos);
    for(i=0; i<casos; i++) {
        scanf("%d", &m);
        int fra[2][m];
        for(c=0; c<m; c++) {
            scanf("%d/%d", &fra[0][c], &fra[1][c]);
        }
        printf("Caso de teste %d\n", i+1);
        c=0;
        while(c<m) {
            k=c;        
            while(k<m) {
                if(fra[0][c]!=fra[0][k] || fra[1][c]!=fra[1][k]) {
                    fra1=((double)fra[0][c]/fra[1][c]);
                    fra2=((double)fra[0][k]/fra[1][k]);
                    if(fra1==fra2) {
                        printf("%d/%d equivalente a %d/%d\n", fra[0][c], fra[1][c], fra[0][k], fra[1][k]);
                        eq++;
                    }
                }
                k++;
            }
            c++;
        }
        if(eq==0) printf("Nao ha fracoes equivalentes na sequencia\n");
        eq=0;
    }

    return 0;
}