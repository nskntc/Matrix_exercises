#include <stdio.h>

int main() {
    int i, c=0, t;
    char pl; //primeira letra da palavra
    char plant=0; //primeira letra da palavra anterior
    int iguais=0, al=0;
    char txt[5000];
    char str[100];
    while(scanf("%[^\n]%*c", txt) != EOF) {
        t=0;
        while(txt[t]!='\0') {
            if(txt[t]<91 && txt[t]>64) txt[t]+=32;
            t++;
        }
        i=0;
        while(i<t) {
            while(1) {
                str[c]=txt[i];
                if(str[c]==' ') break;
                c++;
                i++;
            }
            pl=str[0];
            if(pl==plant) iguais++;
            if(pl!=plant) iguais=0;
            if(iguais==1) al++;
            plant=pl;
            c=0;
            i++;
        }
        printf("%d\n", al);
        al=0;
    }

    return 0;
}